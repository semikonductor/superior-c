#include<stdio.h>
int main()
{
	int n,i,j,a,b;
	int y[101]={0};
	int z[101]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&y[i]);
	}
	for(i=0;i<n;i++)
	{
		for (j=0;j<=i;j++)
		{
			if(y[i]>y[i-j])
			z[i]++;
			
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",z[i]);
	return 0;
}
