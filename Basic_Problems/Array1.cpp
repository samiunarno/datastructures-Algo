#include <iostream>
using namespace std;

int main(){
    //define array size !
    int size = 5;

    int marks[size];

    for (int i=0;i<size;i++){
        cout<<"enter Marks :";
        cin>>marks[i];
    }
    for(int i =0; i<size;i++){
        cout<<marks[i]<<endl;
    }
}