#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    for (int s = 0; s < n; s++) {           // starting index
        for (int e = s; e < n; e++) {       // ending index
            for (int i = s; i <= e; i++) {  // print elements from s to e
                cout << arr[i] << " ";
            }
            cout << endl; // new line after each subarray
        }
    }

    return 0;
}
