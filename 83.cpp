#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int p[n][m],a[m][n];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		{
			scanf("%d",&p[i][j]);
		}
 }
	for(j=0;j<m;j++){
		for(i=0;i<n;i++)
		{
			a[j][i]=p[n-1-i][j];
				
		}
	}
		for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
			if(j==n-1)
			printf("\n");	
		}
	}
}
	

