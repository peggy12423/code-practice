#include<stdio.h>

int gcd(int a,int b){
    if( b == 0 ){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}

int main(){
    int a,b;
    printf("Insert the two value: ");
    scanf("%d %d", &a, &b);
    printf("Answer: %d", gcd(a, b) );

    return 0;
}