#include<stdio.h>
#include<string.h>
int main(){
	int n,i;
	char m[50],c;
	scanf("%d",&n);

	getchar();
	gets(m);
	for(i=0;i<strlen(m);i++)
	{
		putchar((m[i]-'a'+n)%26+'a'); 
    }  
	return 0;
	
}
