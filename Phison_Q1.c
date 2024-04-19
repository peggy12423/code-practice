#include<stdio.h>

void function(int *a, int size)
{
    int *ptr = a;
    int i;
    for( i = 0; i <=500; i++ )
    {
        if( *ptr == i)
        {
            ptr++;
        }
        else
        {
            printf("%d ", i);
        }
    }
}

int main() {
    int a[20] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39};
    int size = sizeof(a) / sizeof(a[0]);
    function(a, size);

    return 0;
}