#include <stdio.h>
#include <stdlib.h>

int main() {

    int size = 0;

    printf("Input the array length: ");
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));

    printf("Element value\n");
    for(int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, *(arr+i));
    }

    printf("Assigned element value:\n");
    for(int i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d" , arr + i);
    }

    printf("Element value:\n");
    for(int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, *(arr+i));
    }

    free(arr);

    return 0;
}