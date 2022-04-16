#include <stdio.h>
#include <string.h>

char A[1002];
char B[1002];
int checksame(char A[], char B[], int al, int ar, int bl, int br);

int main(void)
{
  char c;
  scanf("%s", &A);
  scanf("%s", &B);
  int len_A = strlen(A);
  int len_B = strlen(B);
  if(checksame(A, B, 0, len_A-1, 0, len_B-1)==1)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  return 0;
}

int checksame(char A[], char B[], int al, int ar, int bl, int br)
{
  //char a[500]={0};
  //char b[500]={0};
  //memcpy(a, A+al, ar-al+1);
  //memcpy(b, B+bl, br-bl+1);
  int res;
  res = strncmp(A+al, B+bl, ar-al+1);
  if (res==0)
  {
    return 1;
  }
  else if((ar-al+1)%2 == 1){
    return 0;
  }
  else{
    int amid = (al+ar)/2;
    int bmid = (bl+br)/2;
    if((checksame(A, B, al, amid, bl, bmid) && checksame(A, B, amid+1, ar, bmid+1, br))||(checksame(A, B, al, amid, bmid+1, br) && checksame(A, B, amid+1, ar, bl, bmid)))//a1b1 a2b2
    {
      return 1;
    }
    return 0;
  }
}