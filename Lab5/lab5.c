#include <stdio.h>
#include <math.h>

unsigned int Recursion(unsigned int a, unsigned int b)
{
    return b ? Recursion(++a, --b) : a;
}

unsigned int Cycle(unsigned int i, unsigned int a, unsigned int b)
{
    for (i = 0; i < (a + b); i++);
    return i;
}

int main()
{
    int a, b, i;
    i = 0;
    printf("Введите первое число a ->\n");
    scanf("%d", &a);
    printf("Введите второе число b ->\n");
    scanf("%d", &b);
    printf("Сумма через рекурсию -> %d\n", Recursion(a ,b));
    printf("Сумма через цикл -> %d\n", Cycle(i, a, b));
    return 0;
}
