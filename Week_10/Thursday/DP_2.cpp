class Solution {
  public:
    string longestPalin (string S) {
        // code here
        string rev=S;
        int n = S.size();
        int dp[n][n],res=0,end=-1;
        
        memset(dp,0,sizeof(dp));
        
        int maxLength = 1;
 
        for(int i = 0; i < n; ++i)
            dp[i][i] = 1;
            
        int start = 0,flag=1;;
        for (int i=0; i<n-1;i++) {
            if (S[i] == S[i + 1]) {
                dp[i][i + 1] = 1;
                if(flag){
                start = i;
                maxLength = 2;}
                flag=0;
            }
        }
        for (int k = 3;k<=n;k++) {
            for(int i = 0; i < n - k + 1; i++) {
                int j = i + k - 1;
                if (dp[i + 1][j - 1] && S[i] == S[j]) {
                    dp[i][j] = 1;
                    if (k>maxLength){
                        start = i;
                        maxLength = k;
                    }
                }
            }
        }
            
        string ans = S.substr(start,maxLength);
        return ans;
    }
};