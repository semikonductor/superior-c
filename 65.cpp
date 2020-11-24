#include<stdio.h>
int sum(int n)
{   int a=0,b,c;
    c=n;
	while(n>0)
	{
		b=n%10;
		n=n/10;
		a+=b;
	}
	if(a>10)
	return sum(a);
	else
	return a;
}

int main()
{
    int n;
	scanf("%d",&n);
	printf	("%d",sum(n));
	return 0;
	
 } 
