#include <stdio.h>
#include <math.h>

int main()
{
    double x, z;
    float h;
    printf("Введите шаг h\n");
    scanf("%f", &h);
    printf("\tx\t\t f(x)\n");
    printf("\t_____________________________\n");
    do
    {
        if (x >= -2 && x <= 0)
            z = pow(x, 2) * sin(pow(x, 1/3) - 3);
        if (x > 0 && x <= 1)
            z = sqrt(x) * cos(2 * x);
        printf("\tx %.6f\t f(x) %.4f\n", x, z);
        x += h;
    }
    while (x >= -2 && x <= 1);
    return 0;
}
