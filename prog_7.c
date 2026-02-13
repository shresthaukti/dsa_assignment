#include <stdio.h>
#include <limits.h>

#define V 4  
int minDistance(int dist[], int sptSet[]) {
    int min=INT_MAX, min_index;

    for (int v=0; v < V; v++)
        if (sptSet[v]==0 && dist[v]<=min)
            min=dist[v], min_index=v;

    return min_index;
}

void printPath(int parent[], int j) {
    if (parent[j]==-1)
        return;

    printPath(parent, parent[j]);
    printf("%d ", j);
}


void dijkstra(int graph[V][V], int src) {
    int dist[V];      // shortest distance from the source (at initial INT_MAX :infinite)
    int sptSet[V];    // 1=processed vertex ,0= not processed(at initial=0)
    int parent[V];    //-1 = no parents(at initial=-1)

    for (int i=0; i < V; i++) {
        dist[i]=INT_MAX;
        sptSet[i]=0;
        parent[i]=-1; 
    }

    dist[src]=0;
    for (int count=0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet); 
        sptSet[u]=1;

      
        for (int v=0; v < V; v++)
            if (!sptSet[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u] + graph[u][v] < dist[v]) 
            {
                dist[v]=dist[u] + graph[u][v];
                parent[v]=u;
            }
    }

    
    printf("Vertex\tDistance\tPath\n");
    for (int i=0; i < V; i++) {
        if (i==src) continue;
        printf("%d -> %d \t %d\t\t%d ", src, i, dist[i], src);
        printPath(parent, i);
        printf("\n");
    }
}

int main() {
    int graph[V][V]={// adjacent matrix
        {0, 2, 4, 0},
        {0, 0, 1, 7},
        {0, 0, 0, 3},
        {0, 0, 0, 0}
    };

    int source=0;
    dijkstra(graph, source);

    return 0;
}
