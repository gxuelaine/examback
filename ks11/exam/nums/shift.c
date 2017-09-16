#include<stdio.h>
int main(void)
{
    char x, y, z;
    x = 0b11110100;
    y = 0b10110000;
    z = 2 * x + y / 2;
    /* 分别输出3个变量的十六进制（两位）和十进制形式 */
printf("x：%xH \n",0xff&x);
printf("y：%xH \n",0xff&y);
printf("z：%xH \n",0xff&z);

printf("x：%dD \n",x);
printf("y：%dD \n",y);
printf("z：%dD \n",z);

    return 0;

}

