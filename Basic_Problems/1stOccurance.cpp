//Given two strings needle and haystack, 
//return the index of the first occurrence of needle in haystack, 
//or -1 if needle is not part of haystack.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int strStr(string haystack, string needle){
    if(needle.empty()) return 0;
    int n = haystack.size();
    int m = needle.size();
    for(int i = 0; i<= n-m; i++){
        int j = 0;
        while(j<m && haystack[i+j] ==needle[j]){
            j++;
        }
        if(j==m){
            return i;
        }

    }
    return -1;
}

int main(){
    string hayStack = " Hello World";
    string needle = "World";
    int index = strStr(hayStack,needle);
    if(index != -1){
        cout<<"First Occurance of Needle in Haystack is at Index :"<< index<<endl;

    }
    else{
        cout<<"Not In Needle "<<endl;

    }
    return 0;
}