#include "stdio.h"
int main()
{long a,max=-2147483648;
 printf("ÇëÊäÈëÈô¸ÉÊý×Ö:\n");
 while(1)
 {scanf("%d",&a);
    if(a==0) break;
    if(a>max) max=a;
 }
 printf("max=%d\n",max);
}