

#include<stdio.h>
# define size 5
int visited[size]={0};
void dfs(int graph[size][size],int node){
    printf("%d ",node);
    visited[node]=1;
    for(int i=0;i<size;i++){
        if(graph[node][i]==1 && visited[i]==0){
            dfs(graph,i);
        }
    }
}
int main(){
    int graph[size][size] = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 0, 1},
        {0, 1, 0, 0, 1},
        {0, 0, 1, 1, 0}
    };
    dfs(graph,0);
}