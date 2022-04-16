#include <stdio.h>
int prefixsum[(int)1e6+1];
int count(int d);
int main(void)
{
  int t, a, b, i;
  scanf("%d", &t);
  prefixsum[0] = 0;
  for (int i = 1; i <= (int)1e6+1 ; i++)
  {
    prefixsum[i] = prefixsum[i-1]+count(i);
  }
  while(t--)
  {
    scanf("%d %d", &a, &b);
    printf("%d\n", prefixsum[b] - prefixsum[a-1]);
  }
  return 0;
}

int count(int d)
{
  int digit = 0;
  while(d)
  {
    if(d%10 == 1)
    {
      digit++;
      d /= 10;
    }
    else
    {
      d /= 10;
    }
  }
  return digit;
}