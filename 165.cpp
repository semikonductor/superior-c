#include<stdio.h>
int main()
{
    int n,i,a[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    int l,max=0;
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            l=i;
        }
 
    }
    printf("%d %d %d",n,max,l);
    return 0;
}