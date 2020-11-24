#include <stdio.h>
int main() 
{
	int n;
	float i=1,j=1,sum=0;
	scanf("%d",&n);
	for(int m=0;m<n;m++)
	{   if(m%2==0)
	    {
		    sum+=i/j;
    	}
		else
		{
			sum-=i/j;
		}
		i+=1;
		j+=2;
	}
	printf("%.3lf",sum);
}
