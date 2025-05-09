#include <iostream>
using namespace std;

int main() {

    int n = 10;
    int arr[n] = {1,2,-3,4,-5,6};

    int maxsum = INT_MIN;

    for (int s = 0; s<n; s++){
        
        int sum = 0;
        for(int e =s ; e<n; e++){
            sum = sum + arr[e];
            maxsum = max(maxsum,sum);
            
        }
    }

    cout<<"Max Sub Array is :"<<maxsum<<endl;
    

    return 0;
}
