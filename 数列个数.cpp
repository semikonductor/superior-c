#include<stdio.h>
int main()
{
	int a, b, c, i,count=0,buf[100];
	scanf("%d", &a);
    buf[0]=-1; 
	for (i = 1; i <=a; i++)
	{
		scanf("%d",&buf[i]);
 
		}

	for (i = 1; i <= a; i++)
	{ 
		
		if (buf[i] != buf[i - 1])
			count++;
		else
			continue;


	}
	
	
	printf("%d", count);
	return 0;
}
