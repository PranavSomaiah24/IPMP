// Max Sub-Matrix with all 1s

class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        int dp[n][m];
        
     
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0){
                    res=max(res,mat[i][j]);
                    continue;
                }
                
                if(mat[i][j]==1){
                    mat[i][j]=min(mat[i-1][j-1],min(mat[i][j-1],mat[i-1][j]))+1;
                    
                    res=max(res,mat[i][j]);
                }
            }
        }
        return res;
    }
};