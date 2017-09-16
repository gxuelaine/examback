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
    printf("%d,%d\n",0xff&z,z);
    if(z!=2*(int)x+(int)y/2)
    printf("z溢出\n");
    return 0;

}

