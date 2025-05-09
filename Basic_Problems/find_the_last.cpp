//Length of Last Word

#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s){
    int n = s.size();
    int i = n-1;

    int length = 0;

    while(i>=0 && s[i] != '='){
        length++;
        i--;
    }
    return length;
}

int main(){
    string s = "hello World";


    cout<<lengthOfLastWord(s)<<endl;
}

