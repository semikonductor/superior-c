#include<stdio.h>
#include<math.h>
void check( int s[],int sig[],int n,int* p)
{
    int i,sum=0,j;
    for(i=1;i<n+1;i++)
        s[i]=i;
    for(i=1;i<n;i++)
    {
       if(sig[i]==-1)
       {
           sum=1;
           break;
       }
       if(sig[i]==1)
           s[i+1]=-s[i+1];
       if(sig[i]==2)
       {
           if(s[i]>0){
               s[i+1]=10*s[i]+s[i+1];
               s[i]=0;
           }
           else{
               s[i+1]=10*s[i]-s[i+1];
               s[i]=0;
           }
       }
    }
    for(i=1;i<n+1;i++)
    {
        sum+=s[i];  
    }
    if(sum==0)
    (*p)++; 
}
void signal(int sig[],const int n,int s[],int *p,int w)
{
    int i; 
    for(i=0;i<3;i++)
    {
        sig[w]=i;
         if(w<n-1)
        signal(sig,n,s,p,w+1);
        if(w==n-1)
        check(s,sig,n,p);
    }
}
int main()
{
    int n ,i=1,count=0,*p;
    scanf("%d9",&n);
    int sig[n+1]={0},s[n+1];   
    sig[n-1]=-1;     
    p=&count;
    signal(sig,n,s,p,i);  
    printf("%d",count);
    return 0;
}