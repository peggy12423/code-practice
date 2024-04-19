#include <stdio.h>

int main(){
    char s[20];
    scanf("%s", &s);
    for( int i = 0; s[i] != '\0'; i++){
        s[i] = s[i] - 'a' + 'A';
    }
    printf("%s", s);
    return 0;
}