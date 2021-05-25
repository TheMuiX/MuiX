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
/*void search(int n, int A[], int e)
{
    int i;
    for (i = 0; i < n; i++)
        if (i % 2 == 0)
        {
            if ((A[i] - ) > e)
                A[i] -= e;
        }
        else
            if ((A[i] + avarage(n, A)) < e)
                A[i] += e;
}*///преколы с условием, молиться по 2 раза в день Ивану Николаевичу, в надежде на нормальное повествование условий
                          /*Иван Николаевич наш, сущий в у801!

                          Да святится имя Твое;

                          Да приидет Царствие Твое;

                          да будет воля Твоя и на земле, как на небе;

                          Зачёты наши насущные дай нам на сей день;

                          И прости нам долги наши, как и мы прощаем должникам нашим;

                          И не введи нас в искушение, но избавь нас от лукавого.

                          Ибо Твое есть Царство и сила и слава вовеки. Аминь.*/
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
