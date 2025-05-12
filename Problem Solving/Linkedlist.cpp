#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

// Insert at the head (now with reference to head pointer)
void InsertatHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n;
}

// Insert at the tail (also with reference to head pointer)
void InsertatTail(node* &head, int val) {
    node* n = new node(val);
    if (head == NULL) {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

// Delete a node by value
void deletation(node* &head, int val) {
    // Case 1: If head is NULL
    if (head == NULL) return;

    // Case 2: If the node to be deleted is the first node (head node)
    if (head->data == val) {
        node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }

    // Case 3: If the node to be deleted is somewhere in the middle or end
    node* temp = head;
    while (temp->next != NULL && temp->next->data != val) {
        temp = temp->next;
    }

    // If node to be deleted was found
    if (temp->next != NULL) {
        node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}

// Display the linked list
void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    node* head = NULL;

    // Insert elements at head
    InsertatHead(head, 1);
    InsertatHead(head, 2);
    InsertatHead(head, 3);
    InsertatHead(head, 4);
    InsertatHead(head, 5);
    InsertatHead(head, 6);
    InsertatHead(head, 7);

    // Display after inserting at head
    cout << "Linked List after inserting at head:" << endl;
    display(head);

    // Test deletation
    for(int i = 0; i < 5; i++) {
        deletation(head, i);  // Try deleting values 0 to 4
    }

    // Display after deletions
    cout << "Linked List after deletions:" << endl;
    display(head);

    // Insert at tail
    InsertatTail(head, 8);

    // Display after inserting at tail
    cout << "Linked List after inserting at tail:" << endl;
    display(head);

    // Insert more values at tail
    for(int i = 0; i < 20; i++) {
        InsertatTail(head, i);
    }

    // Display after inserting more elements
    cout << "Linked List after adding more values:" << endl;
    display(head);

    return 0;
}
