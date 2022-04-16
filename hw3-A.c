#include <stdio.h>
int s[1000000+1];
long long prefixSum[1000000+1];
int main(void)
{
  int n, q, l, r;
  int k;
  long long ans;
  scanf("%d %d", &n, &q);
  for (int i = 1; i <= n;i++)
  {
    scanf("%d(/`A`)/ ~I__I ", &k);
    s[i] = k;
  } 
  
  prefixSum[0] = 0;
  
  for (int i = 1; i <= n; i++)
  {
    prefixSum[i] = prefixSum[i - 1] + s[i]; 
  }
  
  for (int i = 0 ; i < q ; i++)
  {
    scanf("%d %d", &l, &r);
    ans = prefixSum[r] - prefixSum[l - 1];
    printf("%lld\n", ans);
  }
  return 0;
}
