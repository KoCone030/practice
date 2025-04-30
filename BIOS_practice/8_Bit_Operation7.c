#include <stdio.h>

unsigned char clear_bit_range(unsigned char value, int start, int end);

int main(void){
    unsigned int a;
    int start, end;
    unsigned char b;

    printf("value = ");
    scanf("%x", &a);
    printf("start end = ");
    scanf("%d %d", &start, &end);

    b = clear_bit_range((unsigned char)a, start, end);
    printf("Result = %#x", b);

    return 0;
}

unsigned char clear_bit_range(unsigned char value, int start, int end){
    unsigned char mask = ((1U << (end - start + 1)) - 1) << start;
    return value & ~mask;
}