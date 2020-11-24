#include<stdio.h>
int mul(int a)
{
	int z=1;
	for(int i=1;i<=a;i++)
	z*=i;
	return z;
}
int main()
{
	int m,n;
	float r;
	
	scanf("%d%d",&m,&n);
	r=1.0*mul(m)/mul(n)/mul(m-n);
	printf("%.2f",r);
}
