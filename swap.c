#include<stdio.h>
#include<string.h>

void swap(char *a, char *b){
    if( a == b ) return;
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main(){
    char str[100];
    printf("Insert the string: ");
    scanf("%s", &str);
    int i=0;
    int j=strlen(str)-1;
    while( i<j ){
        swap( &str[i], &str[j] );
        i++;
        j--;
    }
    printf("Reverse string: %s", &str);
    return 0;
}