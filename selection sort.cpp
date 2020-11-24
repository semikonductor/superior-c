#include<stdio.h>
int main()
{
	int a[100];
	int i,j,k,t,n;
	scanf("%d",&n);
	//n个数 
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    //初始化数组 
	for(i=0;i<n-1;i++)
	{
		for(j=i+1,k=i;j<n;j++)
		{
			if(a[j]<a[k])
			    k=j;
			if(k!=i)
			{
				t=a[i];
				a[i]=a[k];
				a[k]=t;
			}
			    
		}
	}
	//排序 
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	//输出检验 
	return 0;
	
 } 
