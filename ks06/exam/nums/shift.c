#include<stdio.h>
int main(void)
{
    char x, y, z;
    x = 0b11110100;
    y = 0b10110000;
    z = 2 * x + y / 2;
    printf("x,y,z的十六进制表示为%x,%x,%x\n",x,y,z);
    printf("x,y,z的十进制表示为%d,%d,%d\n",x,y,z);
    /* 分别输出3个变量的十六进制（两位）和十进制形式 */
    return 0;

}

