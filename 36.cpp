#include<stdio.h>
int main ()
{
	int m,n,i,j,p,q;
	scanf("%d",&m);
	int a[m][m]={0},sum[m+m+2]={0};
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}//输入矩阵 
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			sum[i]+=a[i][j];
		}
	}//行 
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			sum[i+m]+=a[j][i];
		}
	}//列 
	for(i=0;i<m;i++)
	{
		sum[m+m]+=a[i][i];
	}//主 
	for(i=0;i<m;i++)
	{
		sum[1+m+m]+=a[i][m-i-1];
	}//副 
	for(i=0;i<m+m+2;i++)
	{   q=0;
		for(j=0;j<m+m+1;j++)
		{
			if(sum[j]<sum[j+1])
			    {
			    	p=sum[j];
			    	sum[j]=sum[j+1];
			    	sum[j+1]=p;
			    	q=1;
				}
		}
		if(q=0)
		break;
	}
	for(i=0;i<m+m+2;i++)
	printf("%d ",sum[i]);
	return 0;
	
	
}
