#include<stdio.h>
int main(){
    int n,j,i,p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {   p=0;
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            p=1;
        }
        if(p==0)
        printf("%d %d %d",n,a[i],i);
    }
    return 0;

}