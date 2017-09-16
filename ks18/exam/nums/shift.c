#include<stdio.h>
int main(void)
{
    char x, y, z;
    x = 0b11110100;
    y = 0b10110000;
    z = 2 * x + y / 2;
    /* 分别输出3个变量的十六进制（两位）和十进制形式 */
    printf("十六进制（两位）\n");
    printf("x=%0x \ny=%0x \nz=%0x\n",0xff&x,0xff&y,0xff&z);
    printf("十进制\n");
    printf("x=%d \ny=%d \nz=%d\n",x,y,z);
    return 0;

}

