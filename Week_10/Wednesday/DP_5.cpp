class Solution
{
    public:
    //Function to find the maximum number of cuts.
    
    int helper(int len, int x, int y, int z,int dp[]){
        if(len<=0)
            return 0;
        if(dp[len]!=-1)
            return dp[len];
        int ans=INT_MIN; 
        if(len>=x)
            ans=max(ans,helper(len-x,x,y,z,dp)+1);
        if(len>=y)
            ans=max(ans,helper(len-y,x,y,z,dp)+1);
        if(len>=z)
            ans=max(ans,helper(len-z,x,y,z,dp)+1);
        
        dp[len]=ans;
        return dp[len];
        
    }
    
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code 
        int dp[10001];
        memset(dp,-1,sizeof(dp));
        return max(0, helper(n,x,y,z,dp));
    }
};