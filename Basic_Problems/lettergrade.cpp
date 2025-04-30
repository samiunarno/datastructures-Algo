#include <iostream>
using namespace std;

int main() {

    int n ,sum;

    cout<<"Enter the Number of Student :"<<endl;

    cin>>n;

    int student[n];

    for (int i = 0; i<n ; i++){
        cin>>student[i];
        sum = sum + student[i];
    }
    int p = sum/n;
    cout<<"Sum of Average : "<<sum;
    cout<<endl;
    cout<<"AVerage :"<<p<<endl;

}
