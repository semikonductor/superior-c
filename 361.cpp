#include<stdio.h>
int main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	do
	{  
	   
	  sum+=n;
		n--;
	}while(n>=1);
	printf("%d",sum);
	return 0;
	
}
