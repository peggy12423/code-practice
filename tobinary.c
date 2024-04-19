#include<stdio.h>

void toBinary(int a){
    int binary[32];
    int i = 0;
    while( a != 0 ){
        binary[i] = a % 2;
        a /= 2;
        i++;
    }
    for( int k = i - 1; k >= 0; k++){
        printf("%d", binary[k]);
    }
}

int main(){
    int a;
    printf("Insert value: ");
    scanf("%d", &a);
    tobinary(a);
}