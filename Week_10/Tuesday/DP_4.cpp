// MCM DP

class Solution{
public:
    
    int MCMRecur(int arr[], int l,int r, int N,int dp[][101]){
        
        
        if(l>=r)
            return 0;
        if(dp[l][r]!=INT_MAX)
            return dp[l][r];
            
        for(int k=l;k<r;k++){
            dp[l][r] = min(dp[l][r], MCMRecur(arr,l,k,N,dp)+MCMRecur(arr,k+1,r,N,dp)+arr[l-1]*arr[k]*arr[r]);
        }   
        
        return dp[l][r];        
    }
    
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        int dp[101][101];
        for(int i=0;i<101;i++)
            for(int j=0;j<101;j++)
                dp[i][j]=INT_MAX;
        return MCMRecur(arr,1,N-1,N,dp);
    }
};