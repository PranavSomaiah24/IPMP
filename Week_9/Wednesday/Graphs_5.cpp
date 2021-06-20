//Function to find the number of islands.

class Solution
{
    public:
    
    void helper(int i,int j,vector<vector<char>> grid, vector<vector<int>> &visited){
        int dx[8] = {1,-1,0,0,-1,1,1,-1};
        int dy[8] = {0,0,1,-1,-1,1,-1,1};
        queue<pair<int,int>> q;
        
        q.push({i,j});
        
        while(!q.empty()){
        pair<int,int> v= q.front();
        q.pop();
        visited[v.first][v.second]=1;
        for(int k=0;k<8;k++){
            if(v.first+dx[k]>=0 && v.first+dx[k]<grid.size() && v.second+dy[k]>=0 && v.second+dy[k]<grid[0].size()&& grid[v.first+dx[k]][v.second+dy[k]]=='1' && visited[v.first+dx[k]][v.second+dy[k]]==0){
                    visited[v.first+dx[k]][v.second+dy[k]]=1;
                    q.push({v.first+dx[k], v.second+dy[k]});

            }
        }
        }
        
    }
    
    int numIslands(vector<vector<char>>& grid) 
    {
        // Code here
        vector<vector<int>> visited(grid.size(),vector<int>(grid[0].size(),0));
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    helper(i,j,grid, visited);
                    count++;
                }
            }
        }
        return count;
    }
};