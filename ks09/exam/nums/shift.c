#include<stdio.h>
int main(void)
{
    char x, y, z;
    x = 0b11110100;
    y = 0b10110000;
    z = 2 * x + y / 2;
    printf("x=%x\ny=%02x\nz=%x\n",x,y,z);
    printf("x=%d\ny=%d\nz=%d",x,y,z); 
    /* 分别输出3个变量的十六进制（两位）和十进制形式 */
    return 0;

}

