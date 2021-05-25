#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand () % 101 - 50;
}
float avarage(int n, int A[])
{
    int i; float b = 0.0f;
    for (i = 0; i < n; i++)
        b += A[i];
    return b / n;
}
void search(int n, int A[], int e)
{
    int i;
    for (i = 0; i < n; i++)
        if (i % 2 == 0)
        {
            if (A[i] > avarage(n, A))
                A[i] -= e;
        }
        else
            if (A[i] < avarage(n, A))
                A[i] += e;
}
int main ()
{
    srand(time(NULL));
    int n, i, A[n], e;
    printf("Введте кол-во элементов массива n -> ");
    scanf("%d", &n);
    fill(n, A);
    printf("Матрица с исходными элементами: ");
    for (i = 0; i < n; i++)
        printf("%d", A[i]);
    printf("\nСреднее значение элементов массива: %f\n", avarage(n, A));
    printf("Введите величину отклонения e -> ");
    scanf("%d", &e);
    printf("Матрица с усреднёнными элементами: ");
    search(n, A, e);
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
    return 0;
}
