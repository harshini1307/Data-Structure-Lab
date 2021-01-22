#include <stdio.h>
#include<stdlib.h>
int source, V, E, time, visited[20], G[20][20];
void DFS(int i)
{
	int j;
	visited[i]= 1;
	printf("%d -> ", i+1);
	for(j=0;j<V;j++)
	{
		if(G[i][j] == 1 && visited[j] == 0)
		DFS(j);
	}
}

int main()
{
	int i,j,v1, v2;
	printf("\t\t\tGraphs \n");
	printf("Enter the number of edges: \n");
	scanf("%d", &E);
	printf("Enter number 0f vertices: \n");
	scanf("%d", &V);
	for(i=0;i<V;i++)
		for(j=0;j<V;j++)
			G[i][j] = 0;
	for(i=0; i<E;i++)
	{
	printf("Enter edge (V1 V2) format:  ");
	scanf("%d %d", &v1, &v2);
	G[v1-1][v2-1] = 1;
	}
	for(i = 0; i<V;i++)
	{
		for(j=0;j<V;j++)
			printf("%d\t", G[i][j]);
		printf("\n");
	}
	printf("Enter the source: ");
	scanf("%d", &source);
		DFS(source-1);
	return 0;
}