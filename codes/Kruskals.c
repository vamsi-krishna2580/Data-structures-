#include <stdio.h>
#include <stdlib.h>

#define V 5
#define E 7

struct Edge {
    int src, dest, weight;
};

struct Edge edges[E] = {
    {0, 1, 2},
    {0, 3, 6},
    {1, 2, 3},
    {1, 3, 8},
    {1, 4, 5},
    {2, 4, 7},
    {3, 4, 9}
};

int parent[V];

int find(int i) {
    if (parent[i] == i)
        return i;
    return parent[i] = find(parent[i]);
}

void unionSet(int x, int y) {
    int xset = find(x);
    int yset = find(y);
    parent[xset] = yset;
}

void sortEdges() {
    struct Edge temp;
    for (int i = 0; i < E - 1; i++) {
        for (int j = 0; j < E - i - 1; j++) {
            if (edges[j].weight > edges[j + 1].weight) {
                temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
}

void kruskalMST() {
    int i;
    int e = 0;

    sortEdges();

    for (i = 0; i < V; i++)
        parent[i] = i;

    printf("\nMST using Kruskal's Algorithm:\nEdge \tWeight\n");

    for (i = 0; i < E && e < V - 1; i++) {
        int u = edges[i].src;
        int v = edges[i].dest;
        int set_u = find(u);
        int set_v = find(v);

        if (set_u != set_v) {
            printf("%d - %d \t%d\n", u, v, edges[i].weight);
            unionSet(set_u, set_v);
            e++;
        }
    }
}

int main() {
    kruskalMST();
    return 0;
}
