#include<stdio.h>

int countZero(int a){
    int count=0;
    while(a!=0){
        if( a%2 == 0){
            count++;
        }
        a = a/2;
    }
    return count;
}

int main(){
    int a;
    scanf("%d", &a);
    printf("result: %d", countZero(a));
}