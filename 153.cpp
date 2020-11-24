#include <stdio.h>


int main() 
{
	int a,b,m ,n,buf,p,i,q;
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		buf=a;
	    a=b;
	    b=buf;
	}
	//abig bsmall
	for(i=b;i>0;i--)
	{
		if(a%i==0&&b%i==0)
	{
		q=i;
	    break;
	}
	
	}
    //yue
    m=a/i;
    n=b/i;
    p=m*n*i;
    printf("最大公约数为：%d\n",q);
    printf("最小公倍数为：%d\n",p);
    return 0;
    
	
	
	
	
}
