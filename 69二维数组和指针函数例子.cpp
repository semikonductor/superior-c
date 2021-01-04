#include<stdio.h>
void check(int* a,int n)
{
	int s,e,i,j,l=-1,r1,r2,p=1;
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{   p=0;
			s=i;
			j=i;
			while(j<=n-1)
			{
				if(a[j]==1)
				{    e=j;
				     j++;
				}
				else
				{
					i=j;
					j=n;
				}
			}
			if(l<e-s)
			{
				l=e-s;
				r1=s;
				r2=e;
			}
		}
	}
    if(p==1)
    printf("-1 -1\n");
    if(p==0)
    printf("%d %d\n",r1,r2);
	
}
int main(){
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++)
	{
		check(a[i],n);
	}
	return 0;
	
}
