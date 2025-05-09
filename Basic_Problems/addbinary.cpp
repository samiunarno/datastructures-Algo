#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addBinary(string a, string b) {
    string result = "";
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;

    while(i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if(i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if(j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        result += (sum % 2) + '0';  // Add current binary digit
        carry = sum / 2;            // Update carry
    }

    reverse(result.begin(), result.end()); // Since we build result in reverse
    return result;
}

int main() {
    string a, b;

    cout << "Enter two binary strings (e.g. 1010 1011):" << endl;
    cin >> a >> b;

    string result = addBinary(a, b);
    cout << "Result: " << result << endl;

    return 0;
}
