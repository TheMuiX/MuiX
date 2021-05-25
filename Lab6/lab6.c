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
        b = b +A[i];
    return b / n;


}
int main ()
{
    srand(time(NULL));
    int n, i, A[n];
    printf("Введте кол-во элементов массива n -> ");
    scanf("%d", &n);
    fill(n, A);
    for (i = 0; i < n; i++)
        printf("%4d ", A[i]);
    printf("\n Среднее значение элементов массива: %1f\n", avarage(n, A));
    return 0;
}
