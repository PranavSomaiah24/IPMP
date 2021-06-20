// Kruska's MST
#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
	int src, dest, weight;
};
class Graph {
public:
	int V, E;
	Edge* edge;
};

Graph* createGraph(int V, int E)
{
	Graph* graph = new Graph;
	graph->V = V;
	graph->E = E;

	graph->edge = new Edge[E];

	return graph;
}

class subset {
public:
	int parent;
};

int find(subset subsets[], int i)
{
	if (subsets[i].parent == -1)
		return i;

	return find(subsets, subsets[i].parent);
}

void Union(subset subsets[], int x, int y)
{
	subsets[x].parent=y;
}

int myComp(const void* a, const void* b)
{
	Edge* a1 = (Edge*)a;
	Edge* b1 = (Edge*)b;
	return a1->weight > b1->weight;
}

void KruskalMST(Graph* graph)
{
	int V = graph->V;
	Edge result[V]; 
	int e = 0; 
	int i = 0; 

	qsort(graph->edge, graph->E, sizeof(graph->edge[0]),
		myComp);

	subset* subsets = new subset[(V * sizeof(subset))];

	for (int v = 0; v < V; ++v) {
		subsets[v].parent = -1;
	}

	
	while (e < V - 1 && i < graph->E) 
	{
		Edge next_edge = graph->edge[i++];

		int x = find(subsets, next_edge.src);
		int y = find(subsets, next_edge.dest);

		if (x != y) {
			result[e++] = next_edge;
			Union(subsets, x, y);
		}
	}
	cout << "Following are the edges in the constructed "
			"MST\n";
	int minimumCost = 0;
	for (i = 0; i < e; ++i) 
	{
		cout << result[i].src << " -- " << result[i].dest
			<< " == " << result[i].weight << endl;
		minimumCost = minimumCost + result[i].weight;
	}
	
	cout << "Minimum Cost Spanning Tree: " << minimumCost
		<< endl;
}
