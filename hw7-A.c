#include<stdio.h>
void combination(int arr[], int data[], int start, int end, int index, int r);
int findGCD(int arr[], int n);
int gcd(int a, int b);
int max=0;
int main(void)
{
  int n;
  scanf("%d", &n);
  int a[n];
  //int n = sizeof(arr) / sizeof(arr[0]);
  for(int i = 0; i < n; i++)
  {
    scanf("%d",&a[i]);
  }
  /*for(int r=2;r<n;r++)
  {
    int data[r];
    combination(a,data,0,n-1,0,r);
  }
  printf("%d\n",max);
  */
  int data[2];
  combination(a,data,0,n-1,0,2);
  printf("%d\n",max);
  return 0;
}


void combination(int arr[], int data[], int start, int end, int index, int r) 
{ 
  if(index == r) 
  { 
    int temp[r];
    for (int j = 0; j < r; j++) 
    {
      temp[j]=data[j];
    }
    int gcd;
    gcd = findGCD(temp, r);
    if(gcd>=max)
    {
      max = gcd;
    }
    //printf("max = %d\n",max);
    //printf("%d\n",findGCD(temp, r));
    return; 
  } 
  for(int i = start; i <= end && end - i + 1 >= r - index; i++) 
  { 
    data[index] = arr[i]; 
    combination(arr, data, i+1, end, index+1, r); 
  } 
} 



int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
int gcd(int a, int b){
    if(b == 0)
      return a;
    return gcd(b, a%b);
}


