class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
        string rev=s;
        reverse(rev.begin(),rev.end());
        int n=s.size();
        int dp[n+1][n+1],res=0;
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                    continue;
                }
                if(s[i-1]==rev[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                    res=max(res,dp[i][j]);
                }else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
                
            }
        }
        return res;
    }
};