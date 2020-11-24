#include<stdio.h>
int main()
{
	int a,n,m,p,i,k,d,money=0;
	scanf("%d%d%d",&m,&p,&n);
	for(i=0;i<n;i++)
	    {
	    	scanf("%d%d",&k,&d);
	        m+=k;
	        money-=k*d;
	    
		}
	a=money+m*d;
	printf("%d",a);
	return 0;
	
 }      
