#include<stdio.h>
int main(void)
{
    char x, y, z;
    x = 0b11110100;
    y = 0b10110000;
    z = 2 * x + y / 2;
    printf("x的十六进制是%2x,y的十六进制是%2x,z的十六进制是%2x\n",x,y,z);
    printf("x的十进制是%d,y的十进制是%d,z的十进制是%d\n",x,y,z);
    /* 分别输出3个变量的十六进制（两位）和十进制形式 */
    return 0;

}

