#include <stdio.h>

int check_bit(unsigned char value, int pos);

int main(void){
    unsigned int a;
    int n;
    unsigned char b;

    printf("value = ");
    scanf("%x", &a);
    printf("pos = ");
    scanf("%d", &n);

    b = check_bit((unsigned char)a, n);
    printf("Result = %d\n", b);

    return 0;
}

int check_bit(unsigned char value, int pos){
    return ((value >> pos) & 1U);
}