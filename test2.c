#include<stdio.h>
int main(){
    int arr[6]= {1,2,3,4,5,6};
    int *p = arr;
    *(p++) += 100;
    *(++p) += 100;

    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
