#include<stdio.h>
#include<string.h>
int main(){
	char s[100]={0};
	int i,j,p=0;
	scanf("%s",s);
	for(i=0,j=strlen(s)-1;i<j;j--,i++)
	{
		if(s[i]!=s[j])
		{
			p=1;
		}
	}
    if(p==0)
    printf("yes");
    if(p==1)
    printf("no");
    return 0;
    
}
