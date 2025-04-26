#include <iostream>
using namespace std;

void changearr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        arr[i] =10* arr[i];
    }
    
}

int main(){
    //Pass By referance

    int arr []= {1,2,3,4,5};
    changearr(arr,5);
    cout<<"New Array is :"<<endl;
    for (int i = 0; i < 5; i++)
    {
        // cout<<arr[i]<<""<<endl;


        cout<<arr[i]<<endl;
    }

    
    


   
    
}