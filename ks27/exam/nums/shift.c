#include<stdio.h>
int main(void)
{
    char x, y, z;
    x = 0b11110100;
    y = 0b10110000;
    z = 2 * x + y / 2;
    printf("x=%d,y=%d,z=%d\n",(int)x,(int)y,(int)z);
    printf("x=%x\n",0xff&x,(short)x);
    printf("y=%x\n",0xff&y,(short)y);
    printf("z=%x\n",0xff&z,(short)z);
    /* 分别输出3个变量的十六进制（两位）和十进制形式 */
    return 0;

}

