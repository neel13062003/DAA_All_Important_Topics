    //nCk = n-1Cr + n-1Cr-1

#include <stdio.h>
#define MAX 100
int cache[MAX+1][MAX+1];

int ncr(int n,int r)
{
	if(cache[n][r]==-1)
	cache[n][r] = ncr(n-1,r)+ncr(n-1,r-1);
	return cache[n][r];
}
int get_ncr(int n,int r)
{
	int i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			cache[i][j]=-1;
		}
	}

	for(i=1;i<=n;i++)  //  initialize the cache
	{
		cache[i][0]=1;
		cache[i][i]=1;
	}
	return ncr(n,r);
}
int main(int argc, char const *argv[])
{
	int n,r;
	printf("enter the numbers n and r ");
	scanf("%d %d",&n,&r);
	printf("the ncr is %d ",get_ncr(n,r));
	return 0;
}
