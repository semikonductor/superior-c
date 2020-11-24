#include<stdio.h>
int main()
{
	int i,ji=0,ou=0;
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
		ou+=i;
		else
		ji+=i;
	}
	printf("%d\n%d",ji,ou);
	return 0;
	
}
