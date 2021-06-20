int find(int *parent,i){
    if(parent[i]==-1)
        return i;

    return find(parent, parent[i]);
}

void union( parent, x, y){
    parent[x]=y;
}

int isCycle(Graph* graph)
{
    int* parent = new int[graph->V * sizeof(int)];

    memset(parent, -1, sizeof(int) * graph->V);
 
    for(int i=0;i<graph->E;i++){
        int x = find(parent, graph->edge[i].src);
        int y = find(parent, graph->edge[i].dest);

        if(x==y)
            return 1;
        union(parent, x, y);
    }
    return 0;
}