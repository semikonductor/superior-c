#include<stdio.h>

int main()
{
    int n,i,j,sum1=0,sum2=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(n%2==0)
   {
       for(i=0;i<n;i++)
    {
        sum1+=a[i][i];
        sum2+=a[i][n-i-1];
    }
    printf("%d",sum1+sum2)  ;
   }
    else
    {
        for(i=0;i<n;i++)
    {
        sum1+=a[i][i];
        sum2+=a[i][n-i-1];
    }
    printf("%d",sum1+sum2-a[(n-1)/2][(n-1)/2])  ;
    }
    
return 0;
}
