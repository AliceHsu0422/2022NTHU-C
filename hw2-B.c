#include <stdio.h>
int main(void)
{
  int A, B, C, a, b, c;
  scanf("%d %d %d",&A,&B,&C);
  for (a = 0; a <= A; a++) {
  	b = A - a;
    c = B - b;
    if (((b+c)==B)&&((c+a)==C)){
          printf("%d %d %d\n",a,b,c);
          }
  }
  return 0;
}