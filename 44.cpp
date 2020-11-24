#include<stdio.h>
int fei(int n)
{
     if(n==1||n==2)
	     return 1;
	 else 
	{
	 	return fei(n-1)+fei(n-2);    
     }	
}
int su(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
			
		}
		
	}
	return 1;
}
int main()
{
	int a[51]={0};
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	    a[i]=fei(i);
	if(n==2)
	    printf("%d",a[n]);
	else
	{
        if(su(a[n]))
	        printf("yes");
	    else
	        printf("%d",a[n]);
	}
	return 0;
}
