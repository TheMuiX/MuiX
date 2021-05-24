#include <stdio.h>
#include <math.h>
int main()
{
    double f, h, x, sum, sum2, e, del;
    int n = 2;
    printf ("Введите точность -> e:\n");
    scanf ("%le", &e);
    printf ("\tx\t f(x)\n");
    printf("__________________________\n");
    do
    {
        n*=2;
        for (int i = 0; i < n; i++)
        {
            h = (1.6 / n)+ 0.1;
            x = (i * h - (h/2.0));
            if (x >= 0.0 && x<= 0.6)
                f = 1/(1+25*x*x);
            else
                f = (x+2*x*x*x*x)*sin(x*x);
            sum += h * f;
        }
        n*=2;
        for (int i = 0; i < n; i++)
        {
            h = (1.6 / n)+ 0.1;
            x = (i * h - (h/2.0));
            if (x >= 0.0 && x<= 0.6)
            {
                  f = 1/(1+25*x*x);
            }
            else
                f = (x+2*x*x*x*x)*sin(x*x);
            sum2 += h * f;
        }
        printf("\tx%.3lf f(x)%.3lf\n", x, f);
        printf("Количество шагов -> %d\n", n/2);
        printf("__________________________\n");
        del = fabs(sum2 - sum) / 3.0 ;
        printf("Сумма ->%.3lf\n",sum);
        printf("Сумма2 ->%.3lf\n",del);

    }
    while (e<del);

    printf("\tx%.3lf f(x)%.3lf\n", x, f);
    return 0;
}
