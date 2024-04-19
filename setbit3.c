#include <stdio.h>

int setBit3(int num){
    num |= 1 << 2;
    return num;
}

int main(){
    int num;
    scanf("%d", &num);
    num = setBit3(num);
    printf("%d", num);
    return 0;
}