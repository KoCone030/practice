#include <stdio.h>

unsigned char clear_bit_to_0(unsigned char value, int pos);

int main(void){
    unsigned int a;
    int n;
    unsigned char b;

    printf("value = ");
    scanf("%x", &a);
    printf("pos = ");
    scanf("%d", &n);

    b = clear_bit_to_0((unsigned char)a, n);
    printf("%#x", b);

    return 0;
}

unsigned char clear_bit_to_0(unsigned char value, int pos){
    return (value & ~(1U << pos));
}