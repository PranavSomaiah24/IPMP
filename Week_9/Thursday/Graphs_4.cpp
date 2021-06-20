int minDistance(dist, addedV){
    int minD=INT_MAX,v;
    for(int i=0;i<dist.size();i++)
        if(!addedV[i] && minD>=dist[i]){
            minD=dist[i];
            v=i;
        }
        return v;
}

vector<int> dijkstra(int graph[V][V], int src)
{
    vector<int> dist[V]; 
    bool addedV[V]; 
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, addedV[i] = false;

    dist[src] = 0;
  
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, addedV);
        addedV[u] = true;
        
        for (int v = 0; v < V; v++)
            if (!addedV[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
  
    return dist;
}