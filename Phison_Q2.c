#include<stdio.h>

void function( int *a, int size, int b)
{
    int *ptr = a;
    int i;
    while( *ptr < b*100 )
    {
        ptr++;
    }
    
    for(i=b*100; i<(b+1)*100; i++)
    {
        if( *ptr==i )
            ptr++;
        else
            printf("%d ", i);
    }
}
int main()
{
    int a[20]={ 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};
    int size = sizeof(a) / sizeof(a[0]);
    int b=0;
    function( a, size, b);
    return 0;
}