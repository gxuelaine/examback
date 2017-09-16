#include<stdio.h>
#include"passwd.h"

int main(void)
{
   char pwd[1000];
   printf("Please input the password:");
   gets(pwd);
   if (verify(pwd))
      printf("Win!\n");
   else printf("Bomb!\n");
// 密码是 Principles of Computer //


   return 0;
}
