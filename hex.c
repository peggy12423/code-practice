#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// ㄧΑ盢⑻秈计锣传⑻せ秈﹃
void decimalToHex(int decimal, char hex[]) {
    sprintf(hex, "%X", decimal);
}

// ㄧΑ浪琩⑻せ秈﹃い琌Τ綟计
bool hasAdjacentDuplicates(unsigned short n) {
    // ﹚竡跑计ㄓ纗┮Τ计┪ダ
    unsigned int mask = 0;

    // 秈︽笲衡盢┮Τ计┪ダ纗maskい
    while (n > 0) {
        mask |= 1 << (n & 0xF);
        n >>= 4;
    }

    // 狦maskいΤ砆砞竚玥true玥false
    return (mask & (mask - 1)) == 0;
}

int main() {
    unsigned short decimal;
    printf("叫块⑻秈计: ");
    scanf("%d", &decimal);

    char hex[100];
    decimalToHex(decimal, hex);
    printf("癸莱⑻せ秈计: %s\n", hex);

    if (hasAdjacentDuplicates(decimal)) {
        printf("Τ綟狡计\n");
        return 1;
    } else {
        printf("⊿Τ綟狡计\n");
        return 0;
    }
}
