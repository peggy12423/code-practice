#include<stdio.h>
#include<string.h>

void swap( char *a, char *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main()
{
    char str[100];
    int i = 0;
    printf("Input: ");
    scanf("%s", &str);
    int j = strlen(str)-1 ;
    while( i<j )
    {
        swap( &str[i], &str[j] );
        i++;
        j--;
    }
    printf("swap: %s", str);
    return 0;
}
