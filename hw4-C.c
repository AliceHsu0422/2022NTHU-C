#include<stdio.h>

int main(void)
{
  int t, r, g, b, ans, i;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    scanf("%d %d %d", &r, &g, &b);
    if (r >= g && r >= b)
    {
      if(r > (g+b)){
          printf("%d\n",g+b);
      }
      else if(g >= b)
      {
        ans = (r + g - b)/2;
        if (ans < r)
        {
          printf("%d\n",ans+b);
        }
        else
        {
          printf("%d\n",r+b);
        }
      }
      else
      {
        ans = (r + b - g)/2;
        if (ans < r)
        {
          printf("%d\n",ans+g);//ans+g
        }
        else
        {
          printf("%d\n",r+g);
        }
      }
    }
    else if (g >= r && g >= b)
    {
      if(g > (r+b)){
          printf("%d\n",r+b);
      }
      else if(r > b)
      {
        ans = (g + r - b)/2;
        if(ans < g)
        {
          printf("%d\n", ans+b);
        }
        else
        {
          printf("%d\n", g + b);
        }
      }
      else //g>b>r
      {
        ans = (g + b - r)/2;
        if(ans < g)
        {
          printf("%d\n", ans+r);
        }
        else
        {
          printf("%d\n", g + r);
        }
      }
    }
    else if(b >= r && b >= g)
    {
      if(b > (r+g)){
          printf("%d\n",r+g);
      }
      else if(r > g)//b>r>g
      {
        ans = (b+r-g)/2;
        if (ans < b)
        {
          printf("%d\n",ans+g);
        }
        else
        {
          printf("%d\n",b+g);
        }
      }
      else//b>g>r
      {
        ans = (b+g-r)/2;
        if(ans < b)
        {
          printf("%d\n",ans+r);
        }
        else
        {
          printf("%d\n",b+r);
        }
      }
    }
  }
  return 0;
}