#include<stdio.h>
#include<string.h>
int main(){
	int i=1,p;
	char c1,c2;
	int c3;
	
	while(1)
	{   p=1;
		c2=getchar();
		if(c2=='\n')
		{
			break;
		}
		
		if(c2<='9'&&c2>='1')//shuzi
		{   c3=c2-'0';
			while(p>0)
			{  
			   c2=getchar();
			   if(c2=='\n')
			   p=-1;
			   else if(c2<='9'&&c2>='0')
			   c3=c3*10+c2-'0';	
			   
			   else 
			   p=0; 
			}
			for(i=1;i<=c3-1;i++)
			printf("%c",c1);
			if(p==0)
			printf("%c",c2);
			
		}//zimu
		else{
		printf("%c",c2);
		}
		c1=c2;
		if(c2=='\n')
		{
			break;
		}
	}
	printf("\n");
	return  0;
}
