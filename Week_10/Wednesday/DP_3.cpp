class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int> dp(n);
	    
	    dp[0]=arr[0];
	    int maxx=dp[0];
	    for(int i=1;i<n;i++){
	        dp[i]=arr[i];
	        for(int j=0;j<i;j++){
	            if(arr[i]>arr[j]){
	                dp[i]=max(dp[i],dp[j]+arr[i]);
	            }
	        }
	        if(dp[i]>maxx)
	           maxx=dp[i];
	    }
	    
	    return maxx;
	}  
};