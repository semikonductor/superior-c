#include<stdio.h>
int main()
{
	int n,m,i,j,c,p;
	scanf("%d%d",&m,&n);
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(p=0;p<=15;p++)
	{   c=0;
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==p)
			c++;
		}
	
	}
	printf("%d %d\n",p,c);
	}
	return 0;
}
