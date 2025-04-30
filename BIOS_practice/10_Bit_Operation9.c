#include <stdio.h>

unsigned char copy_bits(unsigned char value, int src_start, int dst_start, int length);

int main(void){
    unsigned int a;
    int src_start, dst_start, length;
    unsigned char b;

    printf("value = ");
    scanf("%x", &a);
    printf("src_start src_end length = ");
    scanf("%d %d %d", &src_start, &dst_start, &length);

    b = copy_bits((unsigned char)a, src_start, dst_start, length);
    printf("Result = %#x", b);

    return 0;
}

unsigned char copy_bits(unsigned char value, int src_start, int dst_start, int length){
    // 1. 建立遮罩以抓出 source bits
    unsigned char src_mask = ((1U << length) - 1) << src_start;

    // 2. 取得來源位元，並右移回原點（0位）
    unsigned char bits = (value & src_mask) >> src_start;

    // 3. 把這些位元移到目標位置
    unsigned char shifted_bits = bits << dst_start;

    // 4. 建立目標區遮罩，把那區清成 0
    unsigned char dst_mask = ((1U << length) - 1) << dst_start;

    // 5. 清除目標區，然後放入複製過來的位元
    return (value & ~dst_mask) | shifted_bits;
}

//      value = 1010 1100
//   src_mask = 0001 1100
//       bits = 0000 0011
// shift_bits = 0110 0000
//   dst_mask = 1110 0000