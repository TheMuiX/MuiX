#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void fill(int n, float a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand() % 101 - 50;
}

float sr(float s, int n, float a[])
{
    for (int i = 0; i < n; i++)
        s += a[i];
    return (float)s / n;
}

float izm(float x, float y, int z)
{
    float n;
    if (z % 2 == 0)
        n = x + y / (z + 2);
    else
        n = x - y / (z + 2);
    return n;
}

void pr(int n, float a[])
{
    for (int i = 0; i < n; i++)
        printf("%f ", a[i]);
    printf("\n");
}

int main()
{
    int n;
    printf("Vvedite n -> ");
    scanf("%d", &n);
    printf("\n");
    float srzn, e, a[n];
    fill(n, a);

    printf("Nach massiv ");
    pr(n, a);

    srzn = sr(s, n, a);
    printf("Srednee znachenie = %f", srzn);

    printf("\n");
    printf("Vvedite tocnost e-> ");
    scanf("%f", &e);

    printf("\n");
    printf("Konech massiv ");
    for (int i = 0; i < n; i++)
        if (fabs(a[i] - srzn) > e)
            a[i] = izm(srzn, e, i);
    pr(n, a);
}
