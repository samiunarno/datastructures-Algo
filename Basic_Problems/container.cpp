//Container With Most Water

#include <iostream>
#include <vector>

int maxArea(std::vector<int>& height){
    int maxArea = 0;
    int left = 0;
    int right = height.size();
    right--;
    while(left < right){
        int width = right - left;
        int h = std::min(height[left], height[right]);
        maxArea = std:: max(maxArea, width * h);
        if(height[left] < height[right]){
            left++;
        }
        else{
            right--;

        }

    }
    return maxArea;

}

int main () {
    std::vector<int> height = { 1,8,6,2,5,4,8,3,7};
    int maxAreaValue = maxArea(height);
    std::cout<<"Maximum Area :"<<maxAreaValue<<std::endl;
    return 0;
    
}
