#include <stdio.h>
int main()
{
	int max=-1,min;
	int i,j;
	scanf("%d",&min);
	for(i=0;i<9;i++)
	   {
	   	     scanf("%d",&j);
	        if(max<j)
	            max=j;
	        if(min>j)
	            min=j;
	
		} 
    printf("%d",max-min);
    return 0;
    
	
}
