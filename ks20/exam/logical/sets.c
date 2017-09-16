#include<stdio.h>
#define ADDELEM(S,a)  (S |= (BITWORD)1<<(a))
typedef  short BITWORD;
int main()
{
   BITWORD bitSetA = 0;
   bitSetA=ADDELEM(bitSetA,2);
   bitSetA=ADDELEM(bitSetA,6);
   /*此处添加代码,将元素2和6添加进集合中*/
   printf("%x\n",bitSetA);
  
   return 0;
}
