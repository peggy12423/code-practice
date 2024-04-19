#include <stdio.h>

int clearBit3(int num){
    num &= ~(1 << 2);
    return num;
}

int main(){
    int num;
    scanf("%d", &num);
    num = clearBit3(num);
    printf("%d", num);
    return 0;
}