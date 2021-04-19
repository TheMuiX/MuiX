#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, h, q;
    int i;
    printf("Введите шаг h\n");
    scanf("%lf", &h);
    printf("\tx\t\t f(x)\n");
    printf("\t_____________________________\n");
    q = 3.00 / h;
    for (i = 0; i <= q; i++)
    {
        x = i * h;
        if (x >= -2.0 && x <= 0.0)
              y = x * x * sin(pow(x, 1.0 / 3.0) - 3.0);
        else
        y = sqrt(x) * cos(2.0 * x);
        printf("\tx %.6f\t f(x) %.4f\n", x, y);
    }
    return 0;
}
