//Selection Sort

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int temp,min;
        for(int i=0;i<nums.size()-1;i++){
            min=i;
            for(int j=i;j<nums.size();j++){
                if(nums[j]<nums[min]){
                    min=j;
                }
            }
            temp=nums[i];
            nums[i]=nums[min];
            nums[min]=temp;
            }
        
        return nums;
    }
};