#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX 100

struct Node{
    int vertex;
    struct Node* next;
};

struct Node* create(int v)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->vertex=v;
    newNode->next=NULL;

    return newNode;
}

struct Graph{
    int numvertices;
    struct Node** adjlist;
    int*visited;
};

struct Graph * createGraph(int vertices)
{
    struct Graph* graph=malloc(sizeof(struct Graph));
    graph->numvertices=vertices;
    graph->adjlist=malloc(vertices*sizeof(struct Node));
    graph->visited=malloc(vertices*sizeof(int));

    for(int i=0; i<graph->numvertices; i++){
        graph->adjlist[i]=0;
        graph->visited[i]=-1;
    }
    return graph;

}

void addEdge(struct Graph* graph,int src, int dest)
{
    struct Node *newnode= createNode(dest);
    newnode->next=graph->adjlist[src];
    
}