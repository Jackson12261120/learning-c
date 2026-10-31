#include "stdio.h"
#include "math.h"
int main()
{double a=1.0,b,x;
    printf("请输入x=");
    scanf("%lf",&x);
    if (x<0) {printf("x必须大于0\n"); return 0;}
    while(1)
    {b=(a+x/a)/2;
     if (fabs(a-b)<1e-5) break;
     a=b;
    }
    printf("x的平方根=%.4f\n",b);
    return 0;
}