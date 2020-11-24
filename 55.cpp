#include<stdio.h>
int feia(int n)
{
	if(n==1)
	    return 2;
	else if(n==2)
	    return 3;
	else 
	    return feia(n-1)+feia(n-2);
	
}
int feib(int n)
{
	if(n==1)
	    return 1;
	else if(n==2)
	    return 2;
	else 
	    return feib(n-1)+feib(n-2);
	
}
int main()
{
	int a[31],b[31];
	double c[31];
	double sum=0;
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c[i]=feia(i)*1.0/feib(i);
		sum+=c[i]	;
	}
	printf("%.2f",sum);
	
	return 0;
	
}
