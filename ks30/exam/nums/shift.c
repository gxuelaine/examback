#include<stdio.h>
int main(void)
{
    char x, y, z;
    x = 0b11110100;
    y = 0b10110000;
    z = 2 * x + y / 2;
    /* 分别输出3个变量的十六进制（两位）和十进制形式 */
    printf("%2x,%2x,%2x\n",x,y,z);
    printf("%d,%d,%d\n",x,y,z);
    return 0;

}

