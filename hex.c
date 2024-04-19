#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// �禡�G�N�̶i����ഫ���̤��i��r��
void decimalToHex(int decimal, char hex[]) {
    sprintf(hex, "%X", decimal);
}

// �禡�G�ˬd�̤��i��r�ꤤ�O�_���۾F���Ʀr�ۦP
bool hasAdjacentDuplicates(unsigned short n) {
    // �w�q�@���ܼƨӦs�x�Ҧ���W���Ʀr�Φr��
    unsigned int mask = 0;

    // �i���B��A�N�Ҧ���W���Ʀr�Φr���s�x��mask��
    while (n > 0) {
        mask |= 1 << (n & 0xF);
        n >>= 4;
    }

    // �p�Gmask���u���@�Ӧ�Q�]�m�A�h��^true�A�_�h��^false
    return (mask & (mask - 1)) == 0;
}

int main() {
    unsigned short decimal;
    printf("�п�J�@�Ӣ̶i��Ʀr: ");
    scanf("%d", &decimal);

    char hex[100];
    decimalToHex(decimal, hex);
    printf("�������̤��i��Ʀr��: %s\n", hex);

    if (hasAdjacentDuplicates(decimal)) {
        printf("���۾F���ƪ��Ʀr�C\n");
        return 1;
    } else {
        printf("�S���۾F���ƪ��Ʀr�C\n");
        return 0;
    }
}
