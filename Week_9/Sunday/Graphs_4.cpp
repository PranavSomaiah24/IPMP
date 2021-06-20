
#define INF 1000000;

class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	
	void dfs(int i, vector<int> adj[],vector<int> &visited, vector<int> &res){
	    visited[i]=1;
	    
	    for(auto x: adj[i]){
	        if(!visited[x]){
	            dfs(x,adj, visited, res);
	        }
	    }
	    res.push_back(i);
	}
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> visited(V,0),res;
	    
	    for(int i=0;i<V;i++){
	        if(!visited[i])
	            dfs(i,adj,visited,res);
	    }
	    reverse(res.begin(),res.end());
	    return res;
	}

    vector<int> shortestPathDAG(int s,int V, vector<int> adj[], vector<vector<int>> weight){
        vector<int> topo=topoSort(V, adj[]), dist(V,INF);
        dist[s]=0;
        for(int i=0;i<topo.size();i++){
                if(dist[topo[i]]!=INF){
                    for(auto x:adj[topo[i]]){
                        if(dist[x]>dist[topo[i]]+weight[topo[i]][x]){
                            dist[x]=dist[topo[i]]+weight[topo[i]][x];
                        }
                    }
                }
        }
        return dist;
    }
};