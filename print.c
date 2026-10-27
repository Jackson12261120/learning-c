#include "stdio.h"
int main()
{long f1,f2;
    int k;
    f1=1,f2=1;
    printf("%10ld%10ld",f1,f2);
    for(k=3;k<=40;k++)
    {f2=f1+f2;
     f1=f2-f1;
     printf("%10ld",f2);
     if (k%4==0) printf("\n");
     }
}