#include<stdio.h>

void diamond(int h){
    int i, space, j, k;
    for( i=1 ; i<=h; i++){
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

    for( i=h-1; i>=1; i--){
        for( space=h-1; space>=i; space--){
            printf(" ");
        }
        for( j=1; j<i; j++){
            printf("%d", j);
        }
        for( k=i; k>=1; k--){
            printf("%d", k);
        }
        printf("\n");
    }
}

int main(){
    int height;
    printf("Insert the height: ");
    scanf("%d", &height);
    diamond(height);
    return 0;
}