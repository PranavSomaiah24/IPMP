//Function to return a list containing the DFS traversal of the graph.


class Solution 
{
    public:
	void helper(vector<int> adj[],vector<int> &visited,vector<int> &res,int v){
	    
	    if(!visited[v]){
	        visited[v]=1;
	        res.push_back(v);
	        for(int i=0;i<adj[v].size();i++){
	            if(!visited[adj[v][i]]){
	                helper(adj, visited, res, adj[v][i]);
	            }
	        }
	    }
	    
	    
	}
	
	
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int> visited(V,0),res;
	    
	    helper(adj,visited,res,0);
	    return res;
	}
};