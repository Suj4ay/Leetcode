class Solution {
public:
    int firstposition(vector<int>& nums,int target){
        int ans=-1;
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid=left + (right - left) / 2;
            if(nums[mid]==target){
                 ans=mid;
                 right=mid-1;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }

      
    }
    return ans;
    }
    int lastposition(vector<int>& nums,int target){
        int ans=-1;
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid=left + (right - left) / 2;
            if(nums[mid]==target){
                 ans=mid;
                 left=mid+1;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }

      
    }
    return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       int first=firstposition(nums,target);
       int last=lastposition(nums,target);
       return{first,last};
    }
};