#include<stdio.h>

void mergesort(int *, int, int);
void merge(int *, int, int, int);

void print(int *data, int len){
    for( int i=0; i<len-1; i++){
            printf("%d, ", data[i]);
        }
        printf("%d]\n", data[len-1]);
}

int main(){
    int num[] = { 20, 5, 95, 54, 3, 11, 75, 12, 10, 8, 51, 70, 90 };
    int len = sizeof(num) / sizeof(num[0]);
    int low = 0;
    int high = len-1;
    printf("Original: [ ");
    print(num, len);
    mergesort(num, low, high);
    printf("Sorting: [ ");
    print(num, len);

    return 0;
}

void mergesort(int *arr, int low, int high){
    if( low<high ){
        int mid = ( low+high ) /2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

void merge(int *arr, int low, int mid, int high){
    int left_index = low;
    int right_index = mid+1;
    int tempArrLen = high-low+1;
    int tempArr[tempArrLen];
    int temp_index = 0;

    while( left_index <= mid && right_index <= high ){
        if( arr[left_index] <= arr[right_index] ){
            tempArr[temp_index] = arr[left_index];
            left_index++;
        }
        else{
            tempArr[temp_index] = arr[right_index];
            right_index++;         
        }
        temp_index++;
    }

    if( left_index > mid ){
        while( right_index <= high ){
            tempArr[temp_index] = arr[right_index];
            right_index++;
            temp_index++;
        }
    }
    else{
        while( left_index <= mid ){
            tempArr[temp_index] = arr[left_index];
            left_index++;
            temp_index++;
        }
    }
    left_index = low;
    for(temp_index=0; temp_index<tempArrLen; temp_index++){
        arr[left_index] = tempArr[temp_index];
        left_index++;
    }

}

