#include <stdio.h>
int sum(int n)
{
	int a,b=0;
	while(n>0)
	{
		a=n%10;
		n=n/10;
		b+=a;
	}
	return b;
}
int main()
{
	int n,a,b=-1,c=0,i,d;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    {
	    	scanf("%d",&a);
	    	d=sum(a);
	    
	    	if(b<d)
	    	    {
	    	    	b=sum(a);
	    	        c=a;
				}
	    	if((b==d)&&(a>c))
	    	   {
	    	   	b=sum(a);
	    	   	c=a;
			   }
			
		}
	printf("%d",c);
	return 0;
}
