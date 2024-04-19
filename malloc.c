#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr = malloc(sizeof(int));

    printf("memory side:%p\n", ptr);
    printf("value:%d\n", *ptr);

    *ptr = 200;

    printf("memory side:%p\n", ptr);
    printf("value:%d\n", *ptr);

    free(ptr);

    return 0;
}