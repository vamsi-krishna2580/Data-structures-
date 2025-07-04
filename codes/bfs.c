#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX]; // adjacency matrix
int visited[MAX];
int queue[MAX];
int front = -1, rear = -1;
int n; // number of vertices

// enqueue
void enqueue(int vertex) {
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = vertex;
    }
}

// dequeue
int dequeue() {
    int vertex;
    if (front == -1 || front > rear) {
        return -1;
    } else {
        vertex = queue[front];
        front++;
        return vertex;
    }
}

// BFS function
void bfs(int start) {
    int i, current;
    enqueue(start);
    visited[start] = 1;

    while (front <= rear) {
        current = dequeue();
        printf("%d ", current);

        for (i = 0; i < n; i++) {
            if (adj[current][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int i, j, start;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    for (i = 0; i < n; i++)
        visited[i] = 0;

    printf("Enter the starting vertex (0-based index): ");
    scanf("%d", &start);

    printf("BFS traversal: ");
    bfs(start);

    return 0;
}