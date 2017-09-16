#include<stdio.h>
int main(void)
{
    char x, y, z;
    x = 0b11110100;
    y = 0b10110000;
    z = 2 * x + y / 2;
    /* 分别输出3个变量的十六进制（两位）和十进制形式 */
    printf("%x,%d\n",0xff&x,x);
    printf("%x,%d\n",0xff&y,y);
    printf("%x,%d\n",0xff&z,z);
    return 0;

}

