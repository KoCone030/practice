#include <stdio.h>

#define BIT3 (1U << 3)
#define SET_BIT(p, n) (p |= (1U << (n)))
#define CLEAR_BIT(p, n) (p &= ~(1U << (n)))
#define FLIP_BIT(p, n) (p ^= (1U << (n)))
#define CHECK_BIT(p, n) (p & (1U << (n)))

void setBit3(void);
void clearBit3(void);
static int b = 0;

int main(void){
    int a = 0;

    a |= BIT3;        // set bit 3

    a &= ~BIT3;       // clear bit 3

    return 0;
}

void setBit3(void){
    b |= BIT3;
}

void clearBit3(void){
    b &= ~BIT3;
}