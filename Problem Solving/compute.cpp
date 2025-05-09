// Compute Pow (x,n)

#include <iostream>


using namespace std;

double myPow(double x, int n) {
    if(n==0){
        return 1;
    }
    else if(n<0){
        x=1/x;
        n=-n;
    }
    double result = 1.0;
    while(n>0){
        if(n%2==1){
            result*=x;
        }
        x*=x;
        n/=2;
    }
    return result;
}

int main (){
    double x = 3.0;
    int n = 10;
    cout<<"Result is :"<<myPow(x,n)<<endl;
}