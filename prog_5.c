#include<stdio.h>

#define MAX 100

int adj[MAX][MAX], vis[MAX], queue[MAX], f=-1, r=-1, V;

int isEmpty(){
    if(f==-1) return 1;
    else return 0;
}
int isFull(){
    if(r==MAX-1) return 1;
    else return 0;
}
void enqueue(int x){
    if(isFull()) return;
    if(isEmpty()) f=0;
    queue[++r]=x;
}
int dequeue(){
    if(isEmpty()) return -1;
    int x=queue[f];
    if(f==r) f=r=-1;
    else f++;
    return x;
}
void BFS(int start){
    for(int i=0;i<V;i++) vis[i]=0;
    enqueue(start); vis[start]=1;
    printf("BFS:");
    while(!isEmpty()){
        int n=dequeue();
        printf(" %d",n);
        for(int i=0;i<V;i++){
            if(adj[n][i]&&!vis[i]){
                enqueue(i);
                vis[i]=1;
            }
        }
    }
    printf("\n");
}
void DFS_use(int n){
    vis[n]=1;
    printf(" %d",n);
    for(int i=0;i<V;i++){
        if(adj[n][i]&&!vis[i]) DFS_use(i);
    }
}
void DFS(int start){
    for(int i=0;i<V;i++) vis[i]=0;
    printf("DFS:");
    DFS_use(start);
    printf("\n");
}
void printAdjMatrix(){
    printf("Adjacency Matrix:\n");
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }
}

int main(){
    V=3; 
    for(int i=0;i<V;i++)
        for(int j=0;j<V;j++) adj[i][j]=0;
    adj[0][1]=adj[1][0]=1;
    adj[1][2]=adj[2][1]=1;
    adj[0][2]=adj[2][0]=1;

    printAdjMatrix(); 
    BFS(0);           
    DFS(0);           

    return 0;
}
