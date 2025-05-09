//Remove Element :

#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> & nums, int val){
    int i =0;
    int n = nums.size();
    for(int j = 0; j<n; j++){
        if(nums[j] != val){
            nums[i] = nums[j];
            i++;

        }

    }
    return i;
}

int main(){
    vector<int> nums = {3,2,2,3};
    int val = 3;
    int newLength = removeElement(nums,val);
    cout<<"New Length : "<<newLength<<endl;
    cout<<"Array After Removing Element :"<<endl;
    for(int i = 0 ; i<newLength; i++){
        cout<<nums[i]<<" "<<endl;

    }
    cout<<endl;
    return 0;
}