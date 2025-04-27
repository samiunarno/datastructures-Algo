#include <iostream>
#include <vector>
using namespace std;
    
    


int main(){
    vector<int> arr ;

    cout<<"SIze of"<<arr.size()<<endl;
    arr.push_back(1);
    arr.push_back(2);

    for(int val : arr){
        cout<<val<<endl;
    }
    cout<<"Capacity"<<arr.capacity()<<endl;

    arr.pop_back();
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    cout<<arr.at(0)<<endl;
    for(int val : arr){
        cout<<val<<endl;
    }
    cout<<"New Capacity"<<arr.capacity()<<endl;

}