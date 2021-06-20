//Function to detect cycle in a directed graph.


class Solution
{
    public:
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	// code here
	   	vector<int> indegree(V,0);
	   	int count=0;
	   	for(int i=0;i<V;i++){
	   	    for(int j=0;j<adj[i].size();j++){
	   	        indegree[adj[i][j]]++;
	   	    }
	   	}
	   	queue<int> q;
	   	for(int i=0;i<V;i++){
	   	    if(indegree[i]==0)
	   	        q.push(i);
	   	}
	   	
	   	while(!q.empty()){
	   	    int v=q.front();
	   	    q.pop();
	   	    int flag=false;
	   	    count++;
	   	    for(int i=0;i<adj[v].size();i++){
	   	        if(--indegree[adj[v][i]]==0){
	   	            q.push(adj[v][i]);
	   	        }
	   	    }
	   	   
	   	    
	   	}
	   	if(count!=V)
	   	        return true;
	   	return false;
	}
};