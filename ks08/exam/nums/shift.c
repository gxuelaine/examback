#include<stdio.h>
int main(void)
{
    char x, y, z;
    x = 0b11110100;
    y = 0b10110000;
    z = 2 * x + y / 2;
   printf("十六进制：x:%x,y:%x,z:%x\n",0xff&x,0xff&y,0xff&z);
   printf("十进制：x:%d,y:%d,z:%d\n",x,y,z);
 /* 分别输出3个变量的十六进制（两位）和十进制形式 */
    return 0;

}

