//Function to return Breadth First Traversal of given graph.

class Solution
{
    public:
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int> visited(V,0),res;
	    queue<int> q;
	    
	    visited[0]=1;
	    q.push(0);
	    
	    while(!q.empty()){
	        int v=q.front();
	        q.pop();
	        
	        visited[v]=1;
	        res.push_back(v);
	        
	        for(int i=0;i<adj[v].size();i++){
	            if(!visited[adj[v][i]]){
	                visited[adj[v][i]]=1;
	                q.push(adj[v][i]);
	        }
	    }
	}
	return res;
	}
};