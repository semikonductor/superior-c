#include<stdio.h>
#include<string.h>
int main(){
    char s[50],dst[50];
    int m,i,j;
    gets(s);
    scanf("%d",&m);
    for(i=0;i<strlen(s)-m-1;i++)
    {
        dst[i]=s[i+m+1];
    }
    dst[i+1]='\0';
    puts(dst);
    return 0;
}