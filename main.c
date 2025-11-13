#include <stdio.h>

void change(char **p)
{
    *p = "All that glitters is not gold.";
}

int main(void)
{
    char *str = "수정하려면 아무 키나 누르십시오...";

    printf("%s\n", str);

    change(&str);

    printf("%s\n", str);

    return 0;
}

