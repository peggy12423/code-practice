// #include<stdio.h>
// #include<string.h>

// void swap(char* a, char* b)
// {
//     if( a==b )
//         return;
//     *a ^= *b;
//     *b ^= *a;
//     *a ^= *b;
// }

// int main()
// {
//     char str[100];
//     printf("Please input the string: ");
//     scanf("%s", &str);
//     int i = 0;
//     int j = strlen(str)-1 ;
//     while( i<j )
//     {
//         char a = str[i];
//         char b = str[j];
//         swap( &a, &b);
//         str[i] = a;
//         str[j] = b;
//         i++; j--;
//     }
//     printf("Reverse string: %s", str);
//     return 0;
// }

#include<stdio.h>
#include<string.h>

void reverseStr(char* a, char* b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    char str[100];
    printf("Please input the reverse string: ");
    scanf("%s", str);
    
    int i = 0;
    int j = strlen( str )-1;
    while( i<j )
    {
        reverseStr( &str[i], &str[j]);
        i++; j--;
    }
    printf("Reverse string: %s", str);
    return 0;
}