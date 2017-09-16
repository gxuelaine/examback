#include<stdio.h>
int main(void)
{
    char x, y, z;
    x = 0b11110100;
    y = 0b10110000;
    z = 2 * x + y / 2;
    /* 分别输出3个变量的十六进制（两位）和十进制形式 */
   printf("十六进制分别为：%02x,%02x,%02x"x,y,z);
   print("十进制分别为：%n,%n,%n"x,y,z);
    return 0;

}

