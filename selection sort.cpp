#include<stdio.h>
int main()
{
	int a[100];
	int i,j,k,t,n;
	scanf("%d",&n);
	//n���� 
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    //��ʼ������ 
	for(i=0;i<n-1;i++)
	{
		for(j=i+1,k=i;j<n;j++)
		{
			if(a[j]<a[k])
			    k=j;
			if(k!=i)
			{
				t=a[i];
				a[i]=a[k];
				a[k]=t;
			}
			    
		}
	}
	//���� 
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	//������� 
	return 0;
	
 } 
