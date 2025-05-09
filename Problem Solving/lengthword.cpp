//Given a string s consisting of words and spaces, 
//return the length of the last word in the string.
//A word is a maximal substring consisting of non-space characters only.
#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int n = s.size();
    int length = 0;
    int i = n - 1;

    // Skip trailing spaces
    while(i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count characters of the last word
    while(i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}

int main() {
    string s = "Hello World";
    int length = lengthOfLastWord(s);
    cout << "Length of Last Word : " << length << endl;

    return 0;
}
