#include<stdio.h>
int main()
{
	int a[100]={0},b[100]={9,9,8};
	for(int i=0;i<10;i++)
	a[i]=b[i];

    for(int j=0;j<10;j++)
	printf("%d ",a[j]);
	return 0;
 } 
