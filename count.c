#include "stdio.h"
int main()
{ int n,posn,negn;
  double a;
  n=posn=0;
  printf("Input real numbers:\n");
  while(1)
  { scanf("%lf",&a);
    if (a==0)
       break;
    if (a>0) 
       posn++;

    n++;
    
    if (n>=20) 
      break;
  }
  negn=n-posn;
  printf("posn=%d,negn=%d\n",posn,negn);
  return 0;
}
