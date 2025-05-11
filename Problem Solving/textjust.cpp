#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> fullJustify(vector<string>& words, int maxWidth) {
    vector<string> result;
    int n = words.size();
    int i = 0;

    while (i < n) {
        int j = i, lineLength = 0;

        // Count how many words can fit in the current line
        while (j < n && lineLength + words[j].length() + (j - i) <= maxWidth) {
            lineLength += words[j].length();
            j++;
        }

        int numWords = j - i;
        int totalSpaces = maxWidth - lineLength;
        string line;

        // If it's the last line or there's only one word in the line
        if (j == n || numWords == 1) {
            for (int k = i; k < j; ++k) {
                line += words[k];
                if (k < j - 1) line += ' ';
            }
            // Add remaining spaces at the end
            line += string(maxWidth - line.length(), ' ');
        } else {
            int space = totalSpaces / (numWords - 1);
            int extra = totalSpaces % (numWords - 1);
            for (int k = i; k < j; ++k) {
                line += words[k];
                if (k < j - 1) {
                    line += string(space + (extra > 0 ? 1 : 0), ' ');
                    if (extra > 0) extra--;
                }
            }
        }

        result.push_back(line);
        i = j;
    }

    return result;
}

int main() {
    vector<string> words = {"This", "is", "an", "example", "of", "text", "justification."};
    int maxWidth = 16;
    vector<string> justifiedText = fullJustify(words, maxWidth);

    for (const string& line : justifiedText) {
        cout << "\"" << line << "\"" << endl;
    }

    return 0;
}
