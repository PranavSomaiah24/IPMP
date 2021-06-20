int find(int *parent,i){
    if(parent[i]!=-1)
        parent[i]=find(parent, parent[i]);

    return parent[i];
}

void union(int *parent, int *rank, x, y){
     if (rank[x] < rank[y])
        parent[x] = y;
    else if (rank[x] > rank[y])
        parent[y] = x;
 
    // If ranks are same, then make one as root and
    // increment its rank by one
    else {
        parent[y] = x;
        rank[x]++;
    }
}

int isCycle(Graph* graph)
{
    int* parent = new int[graph->V * sizeof(int)];
    int* rank = new int[graph->V * sizeof(int)];
    memset(parent, -1, sizeof(int) * graph->V);
    memset(rank, 0, sizeof(int) * graph->V);

    for(int i=0;i<graph->E;i++){
        int x = find(parent, graph->edge[i].src);
        int y = find(parent, graph->edge[i].dest);

        if(x==y)
            return 1;
        union(parent,rank, x, y);
    }
    return 0;
}