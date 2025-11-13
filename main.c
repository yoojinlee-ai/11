#include <stdio.h>

int main(void)
{
    int i = 10;
    int *p = &i;
    int **p2 = &p;

    printf("i = %d\n", i);
    printf("*p = %d\n", *p);
    printf("**p2 = %d\n", **p2);

    return 0;
}


