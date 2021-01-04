#include<stdio.h>
#include<string.h>
int main(){
	char s[100],l[100];
	int j,i,lth=0;
	while(1){
		gets(s);
		if(strcmp(s,"***end***")==0)
		break;
		if(lth<strlen(s))
		{
			strcpy(l,s);
			lth=strlen(l);
		}
	
	}
	printf("%d\n",strlen(l));
	puts(l);
	return 0;
	
}
