#include<stdio.h>

/* 
 *按本说明要求将函数补充完整：
 * bitXor - x^y using only ~ and &
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 */
int bitXor(int x, int y) {
  return ~(x&y)&~((~x)&(~y));
}
int main(void)
{
      printf("%d\n",bitXor(4,5));
      return 0;
}
