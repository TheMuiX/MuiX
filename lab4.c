#include <stdio.h>
#include <math.h>
int main()
{
    double f, h, x, sum, sum2 = 1, e, del = 0;
	  int i, n = 4;
	  printf("Введите точность -> e:\n");
	  scanf ("%le", &e);
	  printf("\tx\t f(x)\n");
	  printf("_____________________________\n");
	  do
	  {
	      for (i = 0; i < n; i++)
	      {
		        h = (1.6 / n) + 0.1;
		        x = (i * h + (h / 2.0));
	          if (x >= 0.0 && x <= 0.6)
			         f = 1 / (1 + 25 * x * x);
		        else
			           f = (x + 2 * x * x * x * x) * sin(x * x);
		        sum += f;
	      }
	      printf("Количество - > %d\n", n);
	      sum = sum * h;
	      del = fabs(sum2 - sum) / 3.0;
	      sum2 = sum;
	      n = 2 * n;
	      printf("Сумма -> %.10lf\n", sum);
	      printf("del -> %lf\n", del);
	  }
	  while (e < del);
	  return 0;
}
