#define INF 100000000
class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    // Code here
	    int n=matrix.size();
	    for(int i=0;i<n;i++){
	            for(int j=0;j<n;j++){
	               if(matrix[i][j]==-1)
	                    matrix[i][j]=INF;
	            }
	        }
	    
	    for(int k=0;k<n;k++){
	        for(int i=0;i<n;i++){
	            for(int j=0;j<n;j++){
	                if(i==k || j==k || i==j)
	                    continue;
                    if(matrix[i][k]!=INF && matrix[k][j]!=INF && matrix[i][k]+matrix[k][j]<matrix[i][j])
                        matrix[i][j]=matrix[i][k]+matrix[k][j];
	            }
	        }
	    }
	    for(int i=0;i<n;i++){
	            for(int j=0;j<n;j++){
	               if(matrix[i][j]==INF)
	                    matrix[i][j]=-1;
	            }
	        }
	}
};