#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int m, int A[n][m])
{
    int i, j;
    printf("Starting matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%4d", A[i][j] = rand () % 101 - 50);
        printf("\n");
    }
}
void Exchange(int n, int m, int A[n][m])
{
    int i, j, b;
    if (n > m)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            if (i == j)
            {
                b = A[i][j];
                A[i][j] = A[i][m - 1 - j];
                A[i][m - 1 - j] = b;
            }
        }
    }
    if (n < m)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            if (i == j)
            {
                b = A[i][j];
                A[i][j] = A[i][m - 1 - j];
                A[i][m - 1 - j] = b;
            }
        }
    }
    if (n == m)
    {
        for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                if (i == j)
                {
                    b = A[i][j];
                    A[i][j] = A[i][n - 1 - j];
                    A[i][n - 1 - j] = b;
                }
            }   
    }
    printf("Final matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }
}


int main ()
{
    srand(time(NULL));
    int n, m;
    printf("Number of lines n -> ");
    scanf("%d", &n);
    printf("Number of columns m -> ");
    scanf("%d", &m);
    int A[n][m];
    fill(n, m, A);
    Exchange(n, m, A);
    return 0;
}