#include <stdio.h>

int main(void)
{
    int grade[5];
    int i, sum = 0;

    for (i = 0; i < 5; i++) {
        printf("grade[%d] = ", i);
        scanf("%d", &grade[i]);
    }

    for (i = 0; i < 5; i++) {
        sum += grade[i];
    }

    printf("ЦђБе = %d\n", sum / 5);

    return 0;
}

