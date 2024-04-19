#include<stdio.h>

int Quick_Sort(int *data, int left,int right){
    if(left < right){
        int ll = left + 1;
        int rr = right;
        int key = data[left];
        int temp;
        do{
            while(ll < right && data[ll] <= key) ll++;   // Note the "<" and "<="
            while(rr > left && data[rr] > key) rr--;
            if(ll < rr){
                temp = data[ll];
                data[ll] = data[rr];
                data[rr] = temp;   // Note this line, swap data[ll + 1] and data[ll]
            }
        }
        while(ll < rr);
           
        temp = data[rr];
        data[rr] = data[left];
        data[left] = temp;   // Note this line, swap data[rr] and the data[left] (key)

        Quick_Sort(data, left, rr - 1);
        Quick_Sort(data, rr + 1, right);
    }
}
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

        Quick_Sort(data, 0, len - 1);

        printf("Sorting: [ ");
        print(data, len);

    return 0;
}