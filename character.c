#include "stdio.h"
int main()
{char ch;
 int n=0;
 printf("请输入一串字符:\n");
 while((ch=getchar())!='\n')
  {if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
   n++;}
 printf("输入的英文字符有%d个\n",n);
return 0;
}