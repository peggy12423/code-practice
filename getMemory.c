#include<stdio.h>
#include<stdlib.h>

void getMemory(char **s)
{
    *s = malloc(sizeof(char));
    printf("s= %p\n", s);
    printf("*s= %p\n", *s);
}

int main()
{
    char *ch = NULL;
    getMemory(&ch);
    printf("&ch= %p", &ch);
    printf("ch= %p", ch);
    return 0;
}