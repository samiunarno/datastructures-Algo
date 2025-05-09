//Given a non-negative integer x, 
//return the square root of x rounded 
//down to the nearest integer. 
//The returned integer should be non-negative as well

#include <iostream>
using namespace std;

int mySqrt(int x) {
    if (x < 2) {
        return x;
    }
    int left = 2, right = x/2, ans = 0;
    while(left <= right) {
        int mid = left + (right -left) / 2;
        long long square = static_cast<long long>(mid) * mid;
        if(square == x){
            return mid;
        }
        else if(square < x){
            ans = mid;
            left = mid + 1;


        }
        else {
            right = mid -1;

        }

    }
    return ans;

}

int main() {
    int x;
    cout<<"Enter a Non Negetive Integer :";
    cin>>x;
    int result = mySqrt(x);
    cout<<"THe Square is "<<result<<endl;
    return 0;
}