#include<stdio.h>
double function(int n)
{
	if(n==1)
	return 1.0;
	else
	    {
		   return 1.0/(1+function(n-1));
	    }
	
}


int main()
{   
    int n;
    scanf("%d", &n);
	printf("%.6f",function(n));
	return 0;
		
}
