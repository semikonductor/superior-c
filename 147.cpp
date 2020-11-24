#include <stdio.h>
int main() 
{
	int a,sum=0;
	while(scanf("%d",&a),a)
	{
		if(a%2==0)
	   {
		continue;
 	   }
	   else
	   {
	   	sum+=a;
	   }
	}
	printf("%d",sum);
	return 0;
	
}
