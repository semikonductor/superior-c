#include <stdio.h>
int main()
{
	int n,m,i,j,t,buf;
	scanf("%d %d",&n,&m);
	int a[n][m]={0},b[n][m]={0},c[n][m]={0};
    
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]); 
			b[i][j]=a[i][j];
			c[i][j]=a[i][j];
		}
	}
	for(i=0;i<n-2;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==a[i+1][j])
			{  buf=b[i][j]; 
			   for(t=2;t<=m-i;t++)
		 	    {  
				   if(a[i+t][j]==buf)
			       {
				   a[i][j]=0;
				   a[i+1][j]=0; 
			       a[i+t][j]=0;  	
				   }
				   else
				   t=m;
			    }  
		    }    
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m-2;j++)
		{
			
			if(b[i][j]==b[i][j+1])
			{   buf=b[i][j];
			    for(t=2;t<=m-j;t++)
			     {  
			     	if(b[i][j+t]==buf)
			        {  
			    	   b[i][j]=0;
			           b[i][j+t]=0;
			           b[i][j+1]=0;
			           
				    }
				    else 
				    t=m;
				 }
			}
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==0||b[i][j]==0)
			    c[i][j]=0;
		}
	}
    for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{   if(j!=m-1)
			printf("%d ",c[i][j]);
			else
		    printf("%d \n",c[i][j]);
		    
		}
	}	

	return 0;
	
}
