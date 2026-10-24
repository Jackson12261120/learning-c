#include "stdio.h"
#include "math.h"
int main ()
{double x,s,a;
    int k;
    a=1;s=0;k=0;
    printf("input x=\n");
    scanf("%lf",&x);
     while(fabs(a)>=1e-6)
    {s+=a;
     k+=2;
     a*=-x*x/k/(k-1);
    }
    printf("s=%f\n",s);
}