#include<stdio.h>
#define ADDELEM(S,a)  (S |= (BITWORD)1<<(a))
typedef  short BITWORD;
int main()
{
   BITWORD bitSetA = 0;
   /*此处添加代码,将元素2和6添加进集合中*/
   ADDELEM(bitSetA,2);
   ADDELEM(bitSetA,6);
   printf("%x\n",bitSetA);
  
   return 0;
}
