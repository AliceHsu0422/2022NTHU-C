#include <stdio.h>
#define LL long long

const int maxn = 5000;
const int mod = 99991;
const int INF = 0x3f3f3f3f;

int a[5000];
int b[9991];

int min(int a, int b)
{
  if (a<b)
    return a;
  else
    return b;
}

int max(int a, int b)
{
  if (a>b)
    return a;
  else
    return b;
}

int main() {
    int T;
    scanf("%d",&T);
    while(T--) {
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        for(int i = 1 ; i <= n ; i++) {
            scanf("%d",&a[i]);
        }
        k = min(k , m - 1);
        int len = n - m + 1; 
        for(int i = 1 ; i <= m ; i++) {
            b[i] = max(a[i],a[i+len-1]);
        }
        int Rank = m - k - 1; 
        int IMAX = 0;
        for(int i = 0 ; i <= k ; i++) {
            int IMIN = INF;
            for(int j = i + 1 ; j <= i + 1 + Rank ; j++) {
                IMIN = min(IMIN,b[j]);
            }
            IMAX = max(IMAX,IMIN);
        }
        printf("%d\n",IMAX);
    }
    return 0;
}

