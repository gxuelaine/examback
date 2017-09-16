#include<stdio.h>
#define ADDELEM(S,a)  (S |= (BITWORD)1<<(a))
typedef  short BITWORD;
int main()
{
   BITWORD bitSetA = 0;
   bitsetA=ASSELEM(bitsetA,6);
   bitsetA=ASSELEM(bitsetA,2);
   /*此处添加代码,将元素2和6添加进集合中*/
   printf("%x\n",bitSetA);
  
   return 0;
}
