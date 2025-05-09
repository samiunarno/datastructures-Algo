#include <iostream>
using namespace std;

int linearsearch(int arr[],int sz,int a){
   
    for (int i = 0; i < sz; i++)
    {
        if (arr[i]==a)
        {
            return i;
        }
        
        
    }
    return -1;
}
    
    


int main(){
    
   //linear searching
   int arr[] ={4,2,7,8,1,2,5};
   int sz = 7;
   int a ;
   cin>>a;
   
   if (arr[sz]==a)
   {
       cout<<"Allowed"<<endl;
   }
   else{
    cout<<"Not allowed"<<endl;
   }
   

   cout<<linearsearch(arr,sz,a)<<endl;


    
}