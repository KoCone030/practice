#include <stdio.h>

unsigned char flip_bit(unsigned char value, int pos);

int main(void){
    unsigned int a;
    int n;
    unsigned char b;

    printf("value = ");
    scanf("%x", &a);
    printf("pos = ");
    scanf("%d", &n);

    b = flip_bit((unsigned char)a, n);
    printf("Result = %#x", b);

    return 0;
}

unsigned char flip_bit(unsigned char value, int pos){
    return (value ^ (1U << pos));
}