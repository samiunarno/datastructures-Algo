//Remove Duplicates From Sorted Array :


#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> & nums){
    int i = 0;
    int n = nums.size();

    for(int j = 1; j<n; j++){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }

    }
    return i+1;

}


int main(){
    vector<int> nums = {1,1,2,2,3,4,4,5};
    int newLength = removeDuplicates(nums);
    cout<<"New Length : "<<newLength<<endl;
    cout<<"Array After Removing Duplicates : ";
    for(int i = 0; i<newLength;i++){
        cout<<nums[i]<<"  ";

    }
    cout<<endl;
    return 0;



}