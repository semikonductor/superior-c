#include<stdio.h>
int main ()
{
	int buf[4],i,temp;
	int j;
	for(i=0;i<4;i++)
		scanf("%d", &buf[i]);
	for(i=0;i<3;i++)
	{
		for	(j=1;j<=3-i;j++)
		{
			if(buf[i]>buf[i+j])
			{
				temp=buf[i];
				buf[i]=buf[i+j];
				buf[i+j]=temp;
			}
		}
	}
	for(i=0;i<4;i++)
		printf("%d ",buf[i]);
	return 0;
	
}
