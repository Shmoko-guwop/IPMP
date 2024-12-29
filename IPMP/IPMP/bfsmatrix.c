#include<stdio.h>
#include<math.h>

#define MAX 100

int adjmatrix[MAX][MAX];
int visited[MAX];
int vertices;

void BFS(int start)
{
    int queue[MAX];
    int front=-1, rear=-1;

    //enqueue
    queue[++rear]=start;
    visited[start]=1;

    while(front!=rear)
    {
        int currentvertex=queue[++front];
        printf("%d", currentvertex);

        for(int i=0; i<vertices; i++)
        {
            if(adjmatrix[currentvertex][i]==1 && visited[i]==0)
            {
                queue[++rear]=i;
                visited[i]=1;
            }
        }
    }
}


int main()
{
    vertices=6;
    for(int i=0; i<vertices;i++)
    {
        for(int j=0;j<vertices;j++)
        {
            adjmatrix[i][j]=0;
        }
        visited[i]=0;
    }

    
}