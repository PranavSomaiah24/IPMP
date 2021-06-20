class Solution{
public:
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        if(N==1){
            return Matrix[0][0];
        }
        int cost=0;
        
        for(int i=1;i<N;i++){
            for(int j=0;j<N;j++){
                if(j==0)
                     Matrix[i][j]=max(Matrix[i-1][0],Matrix[i-1][1])+Matrix[i][0];
                else if(j==N-1)
                    Matrix[i][j]=max(Matrix[i-1][N-1],Matrix[i-1][N-2])+Matrix[i][N-1];
                else
                    Matrix[i][j]=max(Matrix[i-1][j],max(Matrix[i-1][j-1],Matrix[i-1][j+1]))+Matrix[i][j];
            }
        }
        for(int i=0;i<N;i++)
            cost=max(cost,Matrix[N-1][i]);
       
        return cost;
    }
};