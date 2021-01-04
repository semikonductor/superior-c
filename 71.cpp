#include<stdio.h>
int main(){
	int n,m,t,k;
	scanf("%d%d%d%d",&n,&m,&t,&k);
	int ar[n][m],an[100];
	int j,i,x=0,b;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		{
			scanf("%d",&ar[i][j]);
		}
    }
    for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		{
			if(ar[i][j]==k)
			{   if(i!=0)
			    {  an[x]=ar[i-1][j];
			       x++;
			    }
				if(i!=n-1)
			    {  an[x]=ar[i+1][j];
			       x++;
			    }
			    if(j!=0)
			    {  an[x]=ar[i][j-1];
			       x++;
			    }
			    if(j!=m-1)
			    {  an[x]=ar[i][j+1];
			       x++;
			    }
			}
		}
    }
    for(i=0;i<x;i++)
    {	
    	for(j=i+1;j<x;j++)
    	{
    		if(an[j]==an[i])
    		an[j]=0;
    	}	
    }
    int c=0;
    for(i=0;i<x;i++)
    {	
    	if(an[i]<=t&&an[i]>=1&&an[i]!=k)
    	c++;
    }
	printf("%d",c);
	return 0;
}
