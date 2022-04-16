#include<stdio.h>
int a[(int)1e6+1];
long long prefixsum[(int)1e6+1];
int main(void)
{
  int n, q, i, k;
  int l, r, m;
  long long ans;
  scanf("%d %d",&n ,&q);
  for (i = 1 ; i <= n ; i++)
  {
    scanf("%d", &k);
    a[i]=k;
  }
  prefixsum[0] = 0;
  for (i = 1; i <= n; i++)
  {
    if (a[i] > 0){
      prefixsum[i] = prefixsum[i - 1] + a[i]; 
    }
    else{
      prefixsum[i] = prefixsum[i - 1] ; 
    }
  }
  for (i = 0; i < n ; i++ )
  {
    scanf("%d %d %d", &l, &r, &m);
    ans = prefixsum[l+m-1] - prefixsum[l-1];
    printf("%lld\n", ans);
  }
  return 0;
}