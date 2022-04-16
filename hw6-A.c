#include<stdio.h>
int Num(int id, int sum);
int a[(int)1e7+1];
int n, k;
int main(void)
{
  //int n, k;
  //int a[(int)1e7+1];
  int count = 0;
  int i;
  scanf("%d %d", &n, &k);
  for(int i = 0 ; i < n ; i++) 
  {
    scanf("%d",&a[i]);
  }
  count = Num(0, 0);
  printf("%d",count);
  return 0;
}

int Num(int id, int sum)
{
  int add_num;
  add_num = a[id];
  if(sum == k) return 1;
  if(id >= n || sum > k) return 0;
  return Num(id+1, sum + add_num)+ Num(id+1, sum);
}