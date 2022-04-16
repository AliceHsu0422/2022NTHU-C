#include<stdio.h>

int main(void)
{
  int N, start, count;
  int appear[(int)2e5+1] = {0};
  int A[(int)2e5+1],B[(int)2e5+1];
  
  scanf("%d", &N);
  for(int i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);
    }
  
  for(int i = 0; i < N; i++)
  {
    scanf("%d", &B[i]);
    }
  
  start = 0;
  for(int find = 0; find < N ; find++ )
  {
    count = 0;
    if(appear[ B[find] ] == 0 )
    {
      for( ; start < N ; start++ )
      {
        count++;
        appear[ A[start] ] = 1;
        if( A[start] == B[find] )
        {
          start++;
          
          break;
        }
      }
    }
    printf("%d ", count); 
  }  
  return 0;
}