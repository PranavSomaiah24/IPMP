class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    
    bool isCycleUtil(int i,vector<int> adj[], vector<int> &visited, int parent){
        visited[i]=1;
        
        for(auto x:adj[i]){
            if(!visited[x]){
                if(isCycleUtil(x,adj,visited,i))
	                return true;
            }
	        else if(x!=parent)
	                return true;
        }
        return false;
    }
    
	bool isCycle(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int> visited(V,0);
	    
	    for(int i=0;i<V;i++){
	        if(!visited[i]){
	            if(isCycleUtil(i,adj,visited,-1))
                    return true;
	        }
	    }
	    return false;
	}
};