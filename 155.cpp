#include<stdio.h>
int main()
{
	int i,j,n,jie=1,sum=0,a;
	scanf("%d",&n);
	
	for(j=1;j<=n;j++)
	{
	 	
	
	
	
	
	for(i=1;i<=j;i++)
	{
		jie*=i;
	
	}
      a=jie;
	 sum+=jie;
	  jie=1;
	}
		
	printf("%d %d %d",n,a,sum);
}
