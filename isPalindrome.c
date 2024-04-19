#include<stdio.h>
#include<string.h>

int isPalindrome(char* str)
{
    int sLength = strlen(str);
    int i = 0;
    int j = sLength-1;
    while(i<j)
    {
        if(str[i] != str[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{
    char str[]="";
    printf( "Input the string:");
    scanf( "%s", &str );
    if(isPalindrome(str) == 1)
    {
        printf("%s is Palindrome\n", str);
    }
    else
    {
        printf("%s is not Palindrome\n", str);
    }
    return 0;
}