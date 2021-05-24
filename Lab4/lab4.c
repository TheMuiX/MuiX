#include <math.h>
#include <stdio.h>

double sqrt13(double a)
{
    double b;
    if (a > 0)
        b = pow(a, 1.0 / 3.0);
    else
        b = -pow(fabs(a), 1.0 / 3.0);
    return b;
}

double Integral(long int n)
{
    double f = 0.0f, x, h = 3.0f / n;
    for (int i = 0; i < n; i++)
    {
        x = -2.0 + i * h + h / 2.0f;
        if (x <= 0)
            f += x * x * sin(sqrt13(x) - 3);
        else
            f += sqrt(x) * cos(2 * x);
    }
    return f * h;
}

int main()
{
    double In, I2n, e, answer = 2.42417f;
    long int n = 1;
    printf("Введите точность -> ");
    scanf("%lf", &e);
    In = I2n = Integral(n);
    do
    {
        In = I2n;
        n *= 2;
        I2n = Integral(n);
        printf("| n = %ld | I = %lf | D = %lf |  \n\n", n, I2n, fabs(In - I2n) / 3);
    } while ((fabs(In - I2n) / 3) >= e);
    printf(" \n Ответ = %lf \n  In = %lf \n I2n = %lf \n", answer, In, I2n);
}
