#include<stdio.h>
#include<string.h>
int main(){
	char x[100];
	int i;
	gets(x);
	for(i=0;i<=strlen(x);i++)
	{
		if(x[i]<='z'&&x[i]>='a')
		x[i]-=32;
	}
	
	puts(x);
	return 0;
}
