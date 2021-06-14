#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int m, int a[n][m])
{
    int i, j;
    printf("Starting matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%4d", a[i][j] = rand () % 101 - 50);
        printf("\n");
    }
}
void Exchange(int n, int m, int a[n][m])
{
    int i, j, b;
    if (n > m)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            if (i == j)
            {
                b = a[i][j];
                a[i][j] = a[i][m - 1 - j];
                a[i][m - 1 - j] = b;
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
                b = a[i][j];
                a[i][j] = a[i][m - 1 - j];
                a[i][m - 1 - j] = b;
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
                    b = a[i][j];
                    a[i][j] = a[i][n - 1 - j];
                    a[i][n - 1 - j] = b;
                }
            }
    }
    printf("Final matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%4d", a[i][j]);
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
    int **a = (int **)malloc(n * sizeof(int *));
    if (!a)
    {
        printf("Memory allocation error!\n");
        exit(EXIT_FAILURE);
    }
    int i, j;
    for (i = 0; i < n; i++)
        p[i] = malloc(m * sizeof(int));
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            a[i][j] = i * m + j + 1;
    fill(n, m, a);
    Exchange(n, m, a);
    for (i = 0; i < n; i++)
        free (a[i]);
    free (a);
    return 0;
}
