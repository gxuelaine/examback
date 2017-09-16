#include<stdio.h>
int main(void)
{
    char x, y, z;
    x = 0b11110100;
    y = 0b10110000;
    z = 2 * x + y / 2;
    printf("XYZ的十进制分别是%d  %d  %d",x,y,z);
    printf("XYZ的十六进制分别是%0X  %0X  %0X",x,y,z);
    /* 分别输出3个变量的十六进制（两位）和十进制形式 */
    return 0;

}

