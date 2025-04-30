#include <stdio.h>

void show_bits(unsigned char value);

int main(void){
    unsigned int a;

    printf("value = ");
    scanf("%x", &a);

    show_bits((unsigned char)a);

    return 0;
}

void show_bits(unsigned char value){
    for(int i = 7; i >= 0; i--){
        printf("%d", (value >> i) & 1U);
    }
    printf("\n");
}