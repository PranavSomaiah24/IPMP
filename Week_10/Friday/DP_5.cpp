bool isInterleaved(char* A, char* B, char* C){
    int M = strlen(A), N = strlen(B);
    bool dp[M + 1][N + 1];
    memset(dp, 0, sizeof(dp));
 
    if ((M + N) != strlen(C))
        return false;
 
    for (int i = 0; i <= M; ++i){
        for (int j = 0; j <= N; ++j){

            if (i == 0 && j == 0)
                dp[i][j] = true;
            else 
            if (i == 0) {
                if (B[j-1] == C[j-1])
                    dp[i][j] = dp[i][j-1];
            }else 
            if (j == 0) {
                if (A[i-1] == C[i-1])
                    dp[i][j] = dp[i-1][j];
            }else 
            if (A[i - 1] == C[i+j-1] && B[j-1] != C[i+j-1])
                dp[i][j] = dp[i - 1][j];
             else 
             if(A[i-1] != C[i+j-1]&& B[j-1] == C[i+j-1])
                dp[i][j] = dp[i][j-1];
 
             else 
             if(A[i-1] == C[i+j-1] && B[j-1] == C[i+j-1])
                dp[i][j] = (dp[i-1][j] || dp[i][j- ]);
        }
    }
 
    return dp[M][N];
}