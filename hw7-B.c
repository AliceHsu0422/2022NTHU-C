#include<stdio.h>

//int q[n] = {0};
void place(int row,int q[],int n);
int valid(int row, int col,int q[],int n);
//void display(void);
int ans = 0;
int main(void)
{
  	//int ans = 0;
    int n;
    scanf("%d",&n);
  	int q[n];
	place(0,q,n);
    printf("%d\n",ans);
	return 0;
}

int valid(int row, int col,int q[],int n)
{
	int i;
	for (i=0; i<=row-1; i++) {
		if ( q[i]==col || row-i == col-q[i] || row-i == q[i]-col) {
		  return 0;
		}
	}
	return 1;
}

void place(int row,int q[],int n)
{
	int j;
	if (row == n) {
		ans++;
	} else {
		for (j=0; j<n; j++) {
			if (valid(row, j,q,n)) {
				q[row] = j;
				place(row+1,q,n);
			}
		}
	}
}
