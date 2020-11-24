#include<stdio.h>
int su(int a)
{for(int b=2;b<a;b++)
   {
   if(a%b==0)
   return 0;
   }
   return 1;
	
	
	
}

int main()
{   int s,a,b,i,j;
    scanf("%d",&s); 
	for(i=2;i<=s;i++)
	{   for(j=s;j>=2;j--)
	    {   
	    if(su(j)&&su(i)&&s==i+j)
	    {
		  break;
		}
	
		
		
	    	
	    	
	    	
		}
		if(su(j)&&su(i)&&s==i+j)
	    {
		  break;
		}
		}	
		
	printf("%d %d",i,j);
}
