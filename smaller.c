#include<stdio.h>
#include<string.h>

int main()
{
    char str_input[100], str_output[100];
    scanf("%s", &str_input);
    int i = strlen(str_input)-1 ;
    while( i >= 0 )
    {
        str_output[i] = str_input[i]+32;
        i--;
    }
    str_output[strlen(str_input)] = '\0';
    printf("%s", str_output);
    return 0; 
}