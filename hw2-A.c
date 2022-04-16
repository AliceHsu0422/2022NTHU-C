#include<stdio.h>
int main(void)
{
  double x, y;
  double ans;
  int z;
  scanf("%lf %lf %d",&x, &y, &z);
  ans = x*y;
  printf("%.*f\n", ans, z); 
  
  return 0;
}