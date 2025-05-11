#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Method to merge two sorted arrays
    vector<int> mergeSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();
        vector<int> merged(n + m);

        int i = 0, j = 0, k = 0;

        // Merge both arrays into merged[]
        while (i < n && j < m) {
            if (arr1[i] < arr2[j]) {
                merged[k++] = arr1[i++];
            } else {
                merged[k++] = arr2[j++];
            }
        }

        // Copy remaining elements from arr1
        while (i < n) {
            merged[k++] = arr1[i++];
        }

        // Copy remaining elements from arr2
        while (j < m) {
            merged[k++] = arr2[j++];
        }

        return merged;
    }
};

int main() {
    // Input arrays (must be sorted)
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    // Create Solution object
    Solution s;

    // Call the merge function
    vector<int> result = s.mergeSortedArrays(arr1, arr2);

    // Print the merged array
    cout << "Merged Array is: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
