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
        // char temp = str[j];
        // str[i] = str[j];
        // str[j] = temp;
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


// #include <stdio.h>
// #include <string.h>

// int isPalindrome(char* str) {
//     int length = strlen(str);
//     int start = 0;
//     int end = length - 1;

//     while (start < end) {
//         if (str[start] != str[end]) {
//             return 0; // 如果不相等，不是回文
//         }
//         start++;
//         end--;
//     }
    
//     return 1; // 如果所有字符都相等，是回文
// }

// int main() {
//     char myString[] = "racecar"; // 替換成您要檢查的字串
    
//     if (isPalindrome(myString)) {
//         printf("%s 是回文\n", myString);
//     } else {
//         printf("%s 不是回文\n", myString);
//     }
    
//     return 0;
// }
