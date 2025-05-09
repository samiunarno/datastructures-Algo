#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode* next;


    ListNode(int x) : val(x), next(nullptr) {}
};


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    ListNode* dummy = new ListNode(0); 
    ListNode* tail = dummy;


    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val < list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }


    if (list1 != nullptr) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }

    return dummy->next; 
}


void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}


void appendNode(ListNode*& head, int value) {
    if (head == nullptr) {
        head = new ListNode(value);
    } else {
        ListNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new ListNode(value);
    }
}

// Main function
int main() {
    ListNode* list1 = nullptr;
    ListNode* list2 = nullptr;
    appendNode(list1, 1);
    appendNode(list1, 3);
    appendNode(list1, 5);
    appendNode(list2, 2);
    appendNode(list2, 4);
    appendNode(list2, 6);

    cout << "List 1: ";
    printList(list1);
    cout << "List 2: ";
    printList(list2);

    ListNode* merged = mergeTwoLists(list1, list2);

    cout << "Merged List: ";
    printList(merged);

    return 0;
}
