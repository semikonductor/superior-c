#include<stdio.h>
int main ()
{
	char a[100],b;
	for(int i=0 ;i<100;i++)
	scanf("%c",&a[i]);
	for(int i=0 ;i<100;i++)
	b+=a[i];
	
	printf("%c",b%100);
	return 0;
	
	
 } 
