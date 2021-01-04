#include<stdio.h>
int check(int m,int a[],int n)
{
    int b=0 ,s=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>m)
        b++;
        if(a[i]<m)
        s++;
    }
   
    if(b==s)
    return 1;
    else 
    return 0;

}
int main(){
    int n,j,i,q=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
   {
        
        if(j=check(a[i],a,n))
        {
            printf("%d",a[i]);
            q=1;
            break;
        }
   } 
   if(q==0)
   printf("-1");
   return 0;
   
}