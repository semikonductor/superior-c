#include <stdio.h>
int main()
{
	int a,b=0,n;
	scanf("%d",&n);
	
	while(n>0)
	{
		a=n%10;
		n=n/10;
		b+=a;
	}
	printf("%d",b);
}
