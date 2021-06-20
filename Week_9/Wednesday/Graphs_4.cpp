// Find if path exists between given 2 vertices

class Solution
{
    public:
	bool bfsOfGraph(int V, vector<int> adj[], int start, int end)
	{
	    // Code here
        if(start==end)
            return true;
	    vector<int> visited(V,0),res;
	    queue<int> q;
	    
	    visited[start]=1;
	    q.push(start);
	    
	    while(!q.empty()){
	        int v=q.front();
	        q.pop();
	        
	        visited[v]=1;
	        res.push_back(v);
	        
	        for(int i=0;i<adj[v].size();i++){
	            if(adj[v][i]==end)
                        return true;
                
                if(!visited[adj[v][i]]){
	                visited[adj[v][i]]=1;
	                q.push(adj[v][i]);
	        }
	    }
	}
	return false;
	}
};