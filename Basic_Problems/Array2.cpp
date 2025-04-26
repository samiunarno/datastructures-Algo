#include <iostream>
using namespace std;

int main(){
    //find the smallest element in an array
    int size = 5;
    int num[] = {5,2,3,4,1};
    int s = INT_MAX;
    int l = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        s = min(num[i],s);
        l = max(num[i],l);
        
    }
    cout<<"Smalest Element is :"<<s<<endl;
    cout<<"Largest Element is :"<<l<<endl;
    
}