#include <stdio.h>

int main(void)
{
    char *pc;
    int *pi;
    double *pd;

    char c = 'A';
    int i = 10000;
    double d = 3.14;

    pc = &c;
    pi = &i;
    pd = &d;

    printf("pc = %p, pi = %p, pd = %p\n", pc, pi, pd);

    pc++;
    pi++;
    pd++;

    printf("pc = %p, pi = %p, pd = %p\n", pc, pi, pd);

    return 0;
}


