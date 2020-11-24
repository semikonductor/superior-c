#include<stdio.h>
int main ()
{
	char x;
	scanf("%c",&x);
	if(x<='z'&&x>='a')
	printf("%c",x-32);
	else if(x<='Z'&&x>='A')
	printf("%c",x+32);
	else
	printf("%c",x);
	return 0;
	
	
}
