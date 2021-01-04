#include<stdio.h>
#include<string.h>
int main()
{
	int  p=0,i ,j,l,a=0,c=0,b=0,d=0;
	char s[100];
	gets(s);
	l=strlen(s);
	if(l>0)
	    p++;
	if(l>8)
	    p++;
	    
	for(i=0;i<l;i++)
	{   
		if(s[i]<='z'&&s[i]>='a')
			a=1;
	    else if(s[i]<='Z'&&s[i]>='A')
			b=1;
		else if (s[i]<='0'&&s[i]>='9')
			c=1;
		else
			d=1;
	}
	l=a+b+c+d;
	p+=l-1;
	printf("%d",p);
	return 0;
	
	
}
