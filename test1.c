#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    unsigned char *trg = (unsigned char*)malloc( 100 * sizeof(unsigned char));
    unsigned char *src = (unsigned char*)malloc( 100 * sizeof(unsigned char));

    memset( src, 0x00, sizeof(src) );
    src[50]= 0x55;
    for( int i=0; i<10; i++){
        memcpy( trg, src, 10*sizeof(src));
        trg += 10;
        src += 10;
    }

    if(trg[50] == 0x55){
        printf("%c ", trg[50]);
    }
    else{
        printf("no success\n");
    }
}
