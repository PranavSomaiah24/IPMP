//Shortest usorted continuous subarray

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int s=0,e=nums.size()-1;
     for(int i=0;i<nums.size()-1;i++){
         if(nums[i]>nums[i+1]){
            s=i;
            break;
         }
     }  
        if(s==nums.size()-1){
        return 0; 
    }
     for(e=nums.size()-1;e>0;e--){
         if(nums[e]<nums[e-1]){
            break;
         }
     }
    if(e==0){
        return 0; 
    }
    int max = nums[s],min = nums[s];
        
    for(int i=s;i<=e;i++){
        if(nums[i]>max){
            max=nums[i];
        }
        if(nums[i]<min){
            min=nums[i];
        }
    }
    
    for(int i=0;i<s;i++){
        if(nums[i]>min){
            s=i;
            break;
        }
    }
 
     for(int i=nums.size()-1;i>e;i--){
        if(nums[i]<max){
            e=i;
            break;
        }
    }  
    return e-s+1;
    }
};