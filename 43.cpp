#include<stdio.h>
int main()
{
	int a, b, c,max,min;
	scanf("%d", &a);
	
	c = 0;
	max = 0;
	min = 10;
	do
	{
		
		b = a % 10;
		
		
		
		a = a / 10;
		c++;
		if (b > max)
			max = b;
		if (min >b)
			min = b;

	}while (a>0);
	printf("%d %d %d", c, max, min);
}
