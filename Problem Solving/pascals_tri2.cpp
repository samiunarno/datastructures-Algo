#include <iostream>
#include <vector>
using namespace std;

// Function to generate Pascal's Triangle
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle(numRows);
    for (int i = 0; i < numRows; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = 1;
        triangle[i][i] = 1;

        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    return triangle;
}

int main() {
    int numRows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    vector<vector<int>> result = generate(numRows);

    cout << "\nPascal's Triangle:\n";
    for (int i = 0; i < result.size(); i++) {
        // Optional: Add spacing for alignment (centered triangle)
        for (int space = 0; space < numRows - i - 1; space++) {
            cout << " ";
        }
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
