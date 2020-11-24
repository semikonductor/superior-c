#include<stdio.h>
void even(int a)
{   int b=0;
	for(int i=1;i<=a;i++)
	{
		if(i%2==0)
		b++;
	}
	printf("%d ",b);
}
void odd(int a)
{   int b=0;
	for(int i=1;i<=a;i++)
	{
		if(i%2==1)
			b++;
	}
	printf("%d ",b);
}
void sum3(int a)
{   int b=0;
	for(int i=1;i<=a;i++)
	{
		if(i%3==0)
		b++;
	}
	printf("%d ",b);
}
void  sum5(int a)
{   int b=0;
	for(int i=1;i<=a;i++)
	{
		if(i%5==0)
		b++;
	}
	printf("%d ",b);
}
void sum7(int a)
{   int b=0;
	for(int i=1;i<=a;i++)
	{
		if(i%7==0)
		b++;
	}
	printf("%d ",b);
}




int main()
{
	int n;
	scanf("%d",&n);
	//odd(n);
    even(n);
    odd(n);
	sum3(n);
	sum5(n);
	sum7(n);
	return 0;
}
