#include "stdio.h"
int main()
{int n,j,i;
  printf("input n=");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {printf("%*s",i-1,"");
    for(j=1;j<=2*(n-i)+1;j++) 
putchar('*');
   printf("\n");
  }
}