int solveEggDrop(int n, int k) {
  
    if(dp[n][k] != -1){
        return dp[n][k];
    }
     
    if (k == 1 || k == 0)
      return k;
 
    if (n == 1)
      return k;
 
    int min = INT_MAX, x, res;
 
    for (x = 1; x <= k; x++) {
      res = max(solveEggDrop(n - 1, x - 1), solveEggDrop(n, k - x));
      if (res < min)
        min = res;
    }
     
    dp[n][k] = min+1;
    return min + 1;
  }