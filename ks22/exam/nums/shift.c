#include<stdio.h>
int main(void)
{
    char x, y, z;
    x = 0b11110100;
    y = 0b10110000;
    z = 2 * x + y / 2;
    printf(" 十六进制输出：x=%o\n",x);
    printf(" 十进制输出: x=%o\n",x):
    printf("\n");
    printf(" 十六进制输出: y=%o\n",y);
    printf(" 十进制输出： y=%o\n",y);
    printf("\n");
    printf("十六进制输出：z=%o\n",z);
    printf("十进制输出： z=%o\n",z);
    printf("\n");                           /* 分别输出3个变量的十六进制（两位）和十进制形式 */
    return 0;

}

