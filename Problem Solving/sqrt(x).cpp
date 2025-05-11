//Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.


#include <iostream>
using namespace std;

int mysqrt(int x){
    if(x==0 || x==1){
        return x;
    }
    int start = 1;
    int end = x;
    int ans = 0;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(mid*mid ==x){
            return mid;
        }
        else if(mid*mid < x){
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid -1;
        }

    }
    return ans;
    
}