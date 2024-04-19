#include<stdio.h>

void bubblesort(int *array, int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
// void bubblesort(int *arr, int n){
//     for(int i=1; i<n-1; i++){
//         for(int j=1; j<n-i-1; j++){
//             if( arr[j]>arr[j+1] ){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp; 
//             }
//         }
//     }
// }

void print(int *data, int len){
    for( int i=0; i<len-1; i++){
            printf("%d, ", data[i]);
        }
        printf("%d]\n", data[len-1]);
}

int main(){
    int i;
    int data[]= { 20, 5, 95, 54, 3, 11, 75, 12, 10, 8, 51, 70, 90 };
    int len= sizeof(data) / sizeof(data[0]);

        printf("Original: [ ");
        print(data, len);

        bubblesort(data, len);

        printf("Sorting: [ ");
        print(data, len);

    return 0;
}