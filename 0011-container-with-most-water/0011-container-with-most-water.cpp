class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int left=0;
        int right=height.size()-1;
        while(left<right) {
            int width=right-left;
            int length=min(height[left],height[right]);
            int Area=width*length;
            if(Area>maxArea){
                maxArea=Area;
            }
            if(height[left]>height[right]){
                right--;
            }else{
                left++;
            }
        }
        return maxArea;
    }
};