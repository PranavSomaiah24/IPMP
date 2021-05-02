class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int maxSum=arr[0];
        int currSum=arr[0];
        
        for(int i=1;i<n;i++){
            
            if(currSum+arr[i]<arr[i])
                currSum=arr[i];
            else
                currSum+=arr[i];

            if(currSum>maxSum)
                maxSum=currSum;
            
        }
        
        return maxSum;
    }
};