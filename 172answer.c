#include<stdio.h>
int a[20]={0};
int head=1,tail=1;
int point=1;
int n;
int ans=0;
int main()
{

    void dfs(int);
	scanf("%d",&n);
	a[1]=1;
	dfs(1);
	printf("%d",ans);
	
}
void dfs(int point)
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		if(point==n)
		break;
		if(i==1)//此处为+ 
		{
			point++;
			a[point]=point;
			tail=point;
			head=tail;
			dfs(point);//在这里递归 
				a[point]=0;//这一部分是用来进行改变的 
             	point--;
            	tail--;
            	if(head>tail)
				head=tail; 
			continue;
		}
		if(i==2)//这里是- ，和+基本一样 
		{
			point++;
			a[point]=-point;
			tail=point;
			head=tail;
			dfs(point);
			    a[point]=0;
             	point--;
            	tail--;
            	if(head>tail)
            	head=tail;
			continue;
		}
		if(i==3)//这里是空格，最难写的地方 
		{ 
			point++;
			tail=point;
			int lenth=1;
			while(a[head-1]>=10||a[head-1]<=-10)//这是用来找第一个空格位置的，把head指过去 
			head--;
			for(j=tail;j>=head;j--)//分正负进行讨论 
			{
				if(a[head]<0)
				a[j]=-j*lenth;
				if(a[head]>0)
				a[j]=j*lenth;
				lenth*=10;
			}
			dfs(point);
			    a[point]=0;
             	point--;
            	tail--;
            	if(head>tail)//这个处理突发奇想，防止head在tail后面 
            	head=tail;
			continue;
		}
	}
	int sum=0;
	for(j=1;j<=n;j++)
	sum+=a[j];
	if(sum==0&&a[n]!=0)//其实第二个没啥用，是自己代码烂了，打个补丁 
	ans++;
}