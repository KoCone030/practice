#include <stdio.h>

unsigned char set_bit(unsigned char value, int bit_pos);

int main(void){
    unsigned int a;
    int n;
    unsigned char b;

    printf("value = ");
    scanf("%x", &a);
    printf("bit_pos = ");
    scanf("%d", &n);

    b = set_bit((unsigned char)a, n);
    printf("Result: %#x\n", b);
    return 0;
}

unsigned char set_bit(unsigned char value, int bit_pos){
    return (value | (1U << bit_pos));
}