#include<stdio.h>
#include<string.h>
int main(){
	int n,i;
	char m[50];
	scanf("%d",&n);
	getchar();
	gets(m);
	for(i=0;i<=strlen(m);i++)
	m[i]+=n;
	m[i+1]='\0';
	puts(m);
	return 0;
	
}
