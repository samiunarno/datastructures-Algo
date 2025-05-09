//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', 
//determine if the input string is valid.

#include <iostream>
#include <stack>


using namespace std;

bool isValid(string s) {
    stack<char> st;
    for(char c : s) {
        if(c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if(st.empty()) return false;

            char top = st.top();
            if((c == ')' && top != '(') ||
               (c == '}' && top != '{') ||
               (c == ']' && top != '[')) {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main() {

    string input;
    cout<<"Enter a string : "<<endl;
    cin>>input;

    if(isValid(input)){
        cout<<"THe String is valid"<<endl;
    }
    else {
        cout<<"THe String is not Valid"<<endl;
    }

}