#include <stdio.h>

#define TYPE_INT 0
#define TYPE_CHAR 1
#define TYPE_DOUBLE 2
#define TYPE_FLOAT 3
#define TYPE_STRING 4

char typeNames[5][10] = {
    "INT",
    "CHAR",
    "DOUBLE",
    "FLOAT",
    "STRING"
};

const char* getName(int type)
{
    return typeNames[type];
}

int main(void)
{
    int i;
    for (i = 0; i < 5; i++)
        printf("%s\n", getName(i));
    return 0;
}

