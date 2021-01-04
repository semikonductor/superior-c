#include<stdio.h>
#include<string.h>
int i=0,lth;
int xz[100]={0},xy[100]={0},zz[100]={0},zy[100]={0},dz[100]={0},dy[100]={0};
char s[100];

int check(char m,char n,int l,int a[],int b[])
{
	int i,x,y,j=0,k=0;
	for(i=0;i<l;i++)
	{
		if(s[i]==m)
		{
			
			a[j]=i;
			j++;
		}
		if(s[i]==n)
		{
			
			b[k]=i;
			k++;
		}
	}
	if(j!=k)
	return 0;
	for(i=0;i<=j;i++)
	{
		if(a[i]<b[i]);
		else
		return 0;
	}
	return 1;
}
int main()
{   
    
	gets(s);
	lth=strlen(s);
	if(check('(',')',lth,xz,xy)&&check('[',']',lth,zz,zy)&&check('{','}',lth,dz,dy))
	printf("yes");
	else 
	printf("no");
	return 0;
	
	
	
	
}
