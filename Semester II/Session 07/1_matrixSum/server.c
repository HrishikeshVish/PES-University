#include "sum.h"

void sum(int m, int n, int a[m][n], int b[m][n], int r[m][n])
{
int i, j;
for(i = 0; i < m; i++)
for(j = 0; j < n; j++)
r[i][j] = a[i][j] + b[i][j];
}
