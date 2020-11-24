#include<stdio.h>
int su(int n)
{   int i;
	for(i=2;i<n;i++)
	    {
		    if(n%i==0)
		    { 
			
			return 0;
		       
			   
			}
		  
	    } 
		return 1; 
}

int main ()
{
	int m=1,n,a,i;
	scanf("%d",&n);
    for(i=2;i<n;i++)
	    {
		    if(n%i==0)
		    {
			printf("%d",i);
			break;
		    }
		    
	    }
    if(su(n))
    printf("%d",n);
    return 0;
     
}
