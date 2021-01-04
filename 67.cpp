#include<stdio.h>
int main(){
	int i,n,k,p=-1,x;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{   
		scanf("%d",&x);
		if(x==k)
		{
			printf("%d ",i);
			p=0;
		}
	}
	if(p!=0)
    printf("-1");
}

