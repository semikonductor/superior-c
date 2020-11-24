#include<stdio.h>
int main()
{
	int a,b=0,c=0,d,n,m,buf[100];
	scanf("%d",&n);
	while(n>0)
	{  
		buf[c]=n%10;
		n=n/10;
		b+=buf[c];
		c++;
		
	}
	for(c=3;c>=0;c--)
	printf("%d ",buf[c]);
	printf("%d",b);
	return 0;
}
