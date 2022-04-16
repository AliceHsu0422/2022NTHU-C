#include <stdio.h>
#include <string.h>
int prefixsum[(int)1e3+1];
int main(void)
{
  char s[1000];
  char w[1000];
  scanf("%s",&s);
  scanf("%s",&w);
  int length_s = strlen(s);
  int length_w = strlen(w);
  int temp = 0;
  int q;
  for(int i = 0; i < length_w; i++)
  {
    int count;
    count = 0;
    prefixsum[i] = 0;
    //printf("%d %d\n",i,prefixsum[i]);
  }
  for(int i = length_w; i <= length_s; i++)
  {
    char compar[length_w];
    strncpy(compar, &s[i-length_w], length_w);
    int res;
    res = strncmp(compar, w, length_w);
    if (res == 0)
    {
      prefixsum[i] = prefixsum[i-1] + 1;
    }
    else
    {
      prefixsum[i] = prefixsum[i-1];
    }
   	//printf("%d %d\n",i,prefixsum[i]);
  }
  scanf("%d",&q);
  while(q--)
  {
    int a,b;
    scanf("%d %d", &a, &b);
    int len_of_query_string = b-a+1;
    if (len_of_query_string < length_w)
    {
      printf("%d\n", 0);
    }
    else
    {
    	printf("%d\n", prefixsum[b] - prefixsum[a+length_w-2]);
    }
  }
  return 0;
}
