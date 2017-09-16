#include<stdio.h>
int main(void)
{
    char x, y, z;
    x = 0b11110100;
    y = 0b10110000;
    z = 2 * x + y / 2;
    printf("x=%x(十六进制)=%d(十进制)\n",0xff&x,x); 
    printf("y=%x(十六进制)=%d(十进制)\n",0xff&y,y);
    printf("z=%x(十六进制)=%d(十进制)\n",0xff&z,z);
/* 分别输出3个变量的十六进制（两位）和十进制形式 */
    return 0;

}

