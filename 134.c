#include <stdio.h>
int main()
{
    int n,j,i=0,l,t;
    int a[10];
    scanf("%d",&n);
    while(n>0)
    {
        a[i]=n%10;
        n=n/10;
        i++;

    }
    l=i;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-1;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<l;i++)
    printf("%d ",a[i]);
    return 0;
}