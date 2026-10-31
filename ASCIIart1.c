#include "stdio.h"
int main()
{int n,j,i;
  printf("input n=");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {for(j=1;j<=n-i;j++) putchar(32);
   for(j=1;j<=i;j++) putchar('*');
   printf("\n");
  }
}