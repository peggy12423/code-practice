#include<stdio.h>

int high1( int value ){
    int bit = 128;
    int count = 7;
    while( ((value & bit)>>count) != 1 ){
        bit >>= 1;
        count--;
    }
    return count;
}

int main(){
    int value;
    printf("value: ");
    scanf("%d", &value);
    printf("result: %d", high1(value));
    return 0;
}