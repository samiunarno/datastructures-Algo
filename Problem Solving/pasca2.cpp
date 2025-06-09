#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 0);
        row[0] = 1;

        for (int i = 1; i <= rowIndex; i++) {
            for (int j = i; j > 0; j--) {
                row[j] = row[j] + row[j - 1];
            }
        }

        return row;
    }
};

int main() {
    int rowIndex;
    cout << "Enter the row index (0-based) of Pascal's Triangle: ";
    cin >> rowIndex;

    Solution sol;
    vector<int> result = sol.getRow(rowIndex);

    cout << "Row " << rowIndex << " of Pascal's Triangle: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
