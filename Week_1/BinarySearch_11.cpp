// Find min element in sorted and rotated array

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1,mid;
        if(nums[l]<=nums[r]){
            return nums[0];
        }
        while(l<=r){
            mid=l+(r-l)/2;
            
            if(mid<r&&nums[mid]>nums[mid+1]){
                return nums[mid+1];
            }
            if(mid>0 && nums[mid]<nums[mid-1]){
                return nums[mid];
            }
            if(nums[mid]>=nums[l]){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return -1;
    }
};