#include "stdio.h"
int main()
{double s,x,a;
    int k;
    s=0;a=1;k=0;
    printf("input x=\n");
    scanf("%lf",&x);
    while(a>=1e-6)
    {s+=a;
     k++;
     a*=x/k;
    }
    printf("s=%f\n",s);
}