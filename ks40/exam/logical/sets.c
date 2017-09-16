#include<stdio.h>
#define ADDELEM(S,a)  (S |= (BITWORD)1<<(a))
typedef  short BITWORD;
int main()
{
   BITWORD bitSetA = 0;
   cout<<2<<endl;cout<<6<<endl;/*此处添加代码,将元素2和6添加进集合中*/
   printf("%x\n",bitSetA);
  
   return 0;
}
