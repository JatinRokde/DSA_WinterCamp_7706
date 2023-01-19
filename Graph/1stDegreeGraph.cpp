#include <iostream>
using namespace std;

#define V 7

void initialize(int arr[][V])
{
    int i, j;
    for (i = 1; i < V; i++)
        for (j = 1; j < V; j++)
            arr[i][j] = 0;
}

void addEdge(int arr[][V], int i, int j)
{
    arr[i][j] = 1;
    arr[j][i] = 1;
}

void printAdjMatrix(int arr[][V])
{
    int i, j;
    for (i = 1; i < V; i++)
    {
        for (j = 1; j < V; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int adjMatrix[V][V];

    initialize(adjMatrix);
    addEdge(adjMatrix, 1, 2);
    addEdge(adjMatrix, 1, 6);
    addEdge(adjMatrix, 1, 4);
    addEdge(adjMatrix, 2, 3);
    addEdge(adjMatrix, 3, 5);
    addEdge(adjMatrix, 3, 6);
    addEdge(adjMatrix, 4, 5);

    printAdjMatrix(adjMatrix);

    return 0;
}