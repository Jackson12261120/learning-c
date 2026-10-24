#include "stdio.h"
void main()
{double p=1.0;
    int m,n,k;
    printf("n m=");
    scanf("%d%d",&n,&m);
    if (n<0||m<0||n<m)
    {printf("输入的数据不正确!\n");
     return;
    }
    for(k=1;k<=m;k++) p=p*(n-m+k)/k;
    printf("C(%d %d)=%.0f\n",n,m,p);
}