//You are given an absolute path for a Unix-style file system, which always begins with a slash '/'. Your task is to transform this absolute path into its simplified canonical path.

#include <iostream>
#include <vector>
#include <sstream>
#include <stack>
using namespace std;
string simplifyPath(string path) {
        string result;
        string temp;
        stringstream ss(path);
        stack<string> s;

        while (getline(ss, temp, '/')) {
            if (temp == "" || temp == ".") {
                continue;
            } else if (temp == "..") {
                if (!s.empty()) {
                    s.pop();
                }
            } else {
                s.push(temp); 
            }
        }

        while (!s.empty()) {
            result = "/" + s.top() + result;
            s.pop();
        }

        return result.empty() ? "/" : result;
    }