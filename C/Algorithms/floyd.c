#include <stdio.h>

#define nV  7
#define INF  999

void printMatrix(int matrix[][nV]);

// Implementing Floyd-Warshall algorithm
void floydWarshall(int graph[][nV]) {
  int matrix[nV][nV], i, j, k;

  for (i =  0; i < nV; i++)
    for (j =  0; j < nV; j++)
      matrix[i][j] = graph[i][j];

  // Adding vertices individually
  for (k =  0; k < nV; k++) {
    for (i =  0; i < nV; i++) {
      for (j =  0; j < nV; j++) {
        if (matrix[i][k] + matrix[k][j] < matrix[i][j])
          matrix[i][j] = matrix[i][k] + matrix[k][j];
      }
    }
  }
  printMatrix(matrix);
}

void printMatrix(int matrix[][nV]) {
  int i, j;
  for ( i =  0; i < nV; i++) {
    for (j =  0; j < nV; j++) {
      if (matrix[i][j] == INF)
        printf("%4s", "INF");
      else
        printf("%4d", matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int graph[nV][nV] = {
             {0,  4, INF, INF, INF, 5, INF},
             {INF, 0, 2,  INF, INF, INF,  1},
             {INF, INF,0, 10, INF, INF, 3},
             {INF, INF, INF, 0, 6, INF, INF},
             {INF, INF, INF, INF, 0, 1, INF},
             {INF, INF, INF, INF, INF, 0, INF},
             {2, INF, INF, INF, 4, 8, 0}};
  floydWarshall(graph);
}
