#include <stdio.h>

int func(int a, int *b){
    static int c=0;
    a+=*b;
    printf("%d %d %d\n", a,*b,c );
    *b+=a;
    printf("%d %d %d\n", a,*b,c );
    c+=a+*b;
    printf("%d %d %d\n", a,*b,c );
    return c;
}

int main(){
    int x, y, z, sum;
    x=5;
    y=7;
    x=func(x, &y);
    z=func(x, &y);
    sum=x+y+z;
    printf("sum=%d\n", sum);
}