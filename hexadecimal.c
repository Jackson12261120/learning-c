#include "stdio.h"
int main()
{long y=0;
    int x=16,a;
    char c;
    printf("inpute a HEX integer:");
    while(1)
    {c=getchar();
        if (c==10) break;
        if (c>='0'&&c<='9') a=c-48;
         else if (c>='a'&&c<='f') a=c-87;
          else if (c>='A'&&c<='F') a=c-55;
           else break;
     y=y*x+a;
    }
    printf("y=%ld\n",y);  
}