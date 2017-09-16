#include<stdio.h>
int main(void)
{
    char x, y, z;
    x = 0b11110100;
    y = 0b10110000;
    z = 2 * x + y / 2;
    printf("十六进制:x=0x%2x\n",x);
    printf("十六进制:y=0x%2x\n",y); 
    printf("十六进制:z=0x%2x\n",z);
    printf("十进制:x=0x%d\n",x);
    printf("十进制:x=0x%d\n",y);
    printf("十进制:x=0x%d\n",z);/* 分别输出3个变量的十六进制（两位）和十进制形式 */
    return 0;


}

