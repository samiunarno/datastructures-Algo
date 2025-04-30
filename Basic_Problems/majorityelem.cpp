#include <iostream>
#include <vector>
using namespace std;

void modify(int* a){
    *a = 9;
}

int main (){
    int x = 4;
    cout<<"Before :"<<x<<endl;

    modify(&x);

    cout<<"After :"<<x<<endl;
    return 0 ;

}


