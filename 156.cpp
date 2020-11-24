#include<stdio.h>
int main()
{
	int a=0,i;
	for(i=100;i<500;i++)
	{
		if((i%7==0||i%11==0)&&i%77!=0)
		{
		a++;
	
			
		}
	}
	printf("%d",a);
	return 0;
	
	
	
}
