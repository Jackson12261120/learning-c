#include "stdio.h"
int main()
{double pi,a;
    int s,i;
    a=1.0;pi=0;s=1;i=1;
    while(a>1e-6)
    {pi+=s*a;
     i+=2;
     a=1.0/i;
     s=-s;
    }
    pi=pi*4;
    printf("pi=%lf\n",pi);
}