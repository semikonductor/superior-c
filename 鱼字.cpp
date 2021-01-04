#include<stdio.h>
int main ()
{
    int i,a,b;
    int z[100];
    i=0;
    while(1)
    {
    	scanf("%d",&z[i]);
    	if(z[i]==0)
    	    break;
        i++;
    }
    for(b=i-1;b>=0;b--)
    {
        printf("%d ",z[b]);
    }
    return 0;
}

