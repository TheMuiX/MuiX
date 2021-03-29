//Includes
#include <stdio.h>
#include <math.h>
//Main
int main()
{
    double x;
    printf("Enter x {0.0 <= x <= 10.0} ->\n");
    scanf("%lf", &x);
    if(x >= 0 && x <= 10)
    {
        double y = asin(log10(x));
        double z = (y + fabs(y)) * sqrt(y * pow(sin(M_PI * y), 2));
        printf("y(x) = %lf, z(y) = %lf\n", y, z);
    }
    else
        printf("Value (x) is wrong!\n");
    return 0;
}
