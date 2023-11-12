#include<stdio.h>
#include<stdlib.h>

void triangle(int h){
    int i, j, space, k;
    for( i=1; i<=h; i++){
        for( space=i; space<h; space++){
            printf(" ");
        }
        for( j=1; j<=i; j++){
            printf("%d", j);
        }
        for( k=i-1; k>=1; k--){
            printf("%d", k);
        }
        printf("\n");
    }
}

int main(){
    int h;
    printf("Insert height: ");
    scanf("%d", &h);
    triangle(h);
    return 0;
}