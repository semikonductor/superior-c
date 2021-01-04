#include<stdio.h>
int main()
{
	int buf[50];
	int i=1,n,a,b,c;
	scanf("%d",&n);
	buf[0]=n;
	while(n!=1)
	{
		if(n%2==0)
			n/=2;
			
		else
		    n=n*3+1;
		buf[i]=n;
		i++;
	}
	
	for(a=i-1;i>=0;a--)
	printf("%d ",buf[a]);
	return 0;
}
