#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m][n]={0};
	int i,j,p,x1,y1,x2,y2,s,z,q=0;
	//give a number 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}//下面开始 

	for(i=0;i<m;i++)
	{   p=0;
	    s=214748364;
		for(j=0;j<n;j++)
		{   
			if(s>a[i][j])
			{
				s=a[i][j];
				x1=i;
				y1=j;
			}
		}//行最小 
		
		for(z=0;z<m;z++)
		{  
			if(a[z][y1]>a[x1][y1])
			   p=1;	
		}//lie zui da
		
		if(p==0)
		{
			printf("%d %d %d\n",x1,y1,a[x1][y1]);
			q=1;
		}
		
	}
	
	if(q==0) 
	printf("no\n");
	return 0;
	
	
}
