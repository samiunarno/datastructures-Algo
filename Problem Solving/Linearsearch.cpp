//Linear Search 

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size,int n){
    for(int i = 0; i<size;i++){
        if(arr[i] == n){
            return i;
        }

    }
    return -1;
}
int main (){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n;
    cout<<"Enter the number to Search :"<<endl;
    cin>>n;
    int result = linearSearch(arr,size,n);
    if(result == -1){
        cout<<"Element not Found"<<endl;
    }
    else{
        cout<<"Element found at index :"<<result<<endl;
        for(int i = 0;i<size;i++){
            cout<<arr[i]<<"";
        }

    }
    

}