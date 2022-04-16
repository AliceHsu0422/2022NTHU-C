#include <stdio.h>
#include <math.h>
int main(void)
{
  int a,b,c,d,A,B,C;
  scanf("%d.%d %d.%d", &a, &b, &c, &d);  
  A=a*100+b;
  B=c*100+d;
  C=A*B;
  printf("%d.%04d\n", C/10000, C%10000);
  return 0;
}