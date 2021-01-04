#include<stdio.h>
int main (){
	int a[100][100]={};
	int n,j,i,sx,sy,ex,ey,count=0;
	scanf("%d",&n);
	while(n>0)
	{
		scanf("%d%d%d%d",&sx,&sy,&ex,&ey);
		
		for(i=sy;i<ey;i++)
		{
			for(j=sx;j<ex;j++)
			{
				a[i][j]=1;
			
			}
		}
		n--;
	}
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			if(a[i][j]==1)
			count++;
			
		}
	}
	printf("%d",count);
	return 0;
} 
