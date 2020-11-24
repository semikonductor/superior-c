#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a;
	double c,b;
	scanf("%d",&n);
	c=sqrt(n);
	a=c/1;
	
	if(c-a==0)
	    printf("%d",a);
	else
	    printf("no");
	
	
	return 0;
 } 
