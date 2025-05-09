//ou are given a large integer represented as an 
//integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

//Increment the large integer by one and return the resulting array of digits.

#include <iostream>
#include <vector>
using namespace std;

void addOneToLastDigit(vector<int> & digits){
    int n = digits.size();
        int carry = 1; 

        for (int i = n - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            if (sum == 10) {
                digits[i] = 0;
                carry = 1;
            } else {
                digits[i] = sum;
                carry = 0;
                break;
            }
        }

        if (carry == 1) {
            digits.insert(digits.begin(), 1);
        }
}

int main(){
    vector<int> digits = {9,9,9};
    addOneToLastDigit(digits);
    for(int i =0; i<digits.size();i++){
        cout<<digits[i]<<"";
    }
    cout<<endl;
}