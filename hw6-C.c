#include<stdio.h>
#include<string.h>
int MOD=1000000007;
int main(void)
{
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    int x;
    char a[7*(int)1e6];
    scanf("%d", &x);
    scanf("%s",a);
    long long int len_a;
    len_a = strlen(a);
    long long int l;
    l = len_a;
    long long int len_t;
    long long int add;
    for(int i = 1 ; i <= x ; i++)
    {
      //long long int add;
      int left = a[i-1] - '0';
      add = ((l-i)%MOD*(left-1))%MOD;
      l = (l+add)%MOD;
      if(( len_a <= x )&&(left >1))
      {
        char temp[(int)1e6];
        int e=0;
        for (int z=i; z<len_a; z++) 
        {
          temp[e++]=a[z];
        }
        temp[len_a-i]='\0';
        //printf("temp=%d len-a+1=%d\n",strlen(temp),len_a-i+1);
        len_t=len_a-i;
        for(int j = 0 ; j < left-1 ; j++)
        {
          strcat(a,temp);
          len_a=len_a+len_t;
        }
      }
      left = a[i]-'0';    
	}      
    if(l < 0)
    {
      l+=MOD;
    }
    printf("%lld\n",l);
    
  }
  return 0;
}