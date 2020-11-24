#include <stdio.h>
int main()
{
	int a,b,c,d,buf;
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		buf=a;
	    a=b;
	    b=buf;
	}
	d=b*b;
	c=a%10;
	printf("%d %d\n",c,d);
	return 0;
	
 } 
