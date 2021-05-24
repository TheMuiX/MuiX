#include <stdio.h>
#include <math.h>
int main()
{
    double f, h, x, sum, sum2 = 1, e, del = 0;
	  int i, n = 4;
	  printf("Vvedute tochnost` -> e:\n");
	  scanf ("%le", &e);
	  printf("\tx\t f(x)\n");
	  printf("_____________________________\n");
	  do
	  {
	      for (i = 0; i < n; i++)
	      {
		        h = 3.0 / n;
		        x = (i * h + (h / 2.0));
	          if (x >= -2.0 && x <= 0.0)
			          f = x * x * sin(pow(x, 1.0/3) - 3.0);
		        else
			          f = sqrt(x) * cos(2 * x);
		        sum += f;
	      }
	      printf("kol-vo - > %d\n", n);
	      sum = sum * h;
	      del = fabs(sum2 - sum) / 3.0;
	      sum2 = sum;
	      n = 2 * n;
	      printf("summa -> %.10lf\n", sum);
	      printf("del -> %lf\n", del);
	  }
	  while (del > e);
	  return 0;
}
