#include <iostream>
using namespace std;

int reversearr(int arr[], int sz){
    int start = 0;
    int end = sz-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return -1;
    
}

// int linearsearch(int arr[],int sz,int a){
   
//     for (int i = 0; i < sz; i++)
//     {
//         if (arr[i]==a)
//         {
//             return i;
//         }
        
        
//     }
//     return -1;
// }
    
    


int main(){
    
   //linear searching
   int arr[] = {1,2,3,4,5};
   int sz = 5;
//    int a ;
//    cin>>a;
   
//    if (arr[sz]==a)
//    {
//        cout<<"Allowed"<<endl;
//    }
//    else{
//     cout<<"Not allowed"<<endl;
//    }
   
   reversearr(arr,sz);
   for (int i = 0; i < sz; i++)
   {
        cout<<arr[i]<<" "<<endl;
   }
   cout<<endl;
   return 0;
   

//    cout<<linearsearch(arr,sz,a)<<endl;


    
}