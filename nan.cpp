#include<stdio.h>
int main()
{
	int i,j;
    for(i=1;i<5;i++)
    {
    	printf("%d ",i);
    	for(j=1;j<5;j++)
    	{   
		    printf("%d ",j);
    		if(j=2)
    		{break;
			}
    		
		}
	}
	return 0;
	
}
