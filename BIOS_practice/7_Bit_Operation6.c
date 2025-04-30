#include <stdio.h>

unsigned char toggle_even_bits(unsigned char value);

int main(void){
    unsigned int a;
    unsigned char b;

    printf("value = ");
    scanf("%x", &a);

    b = toggle_even_bits((unsigned char)a);
    printf("Result = %#x", b);

    return 0;
}

unsigned char toggle_even_bits(unsigned char value){
    unsigned char x = 1 + (1U << 2) + (1U << 4) + (1U << 6);
    return (value ^ x);
}