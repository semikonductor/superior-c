#include<stdio.h>
#include <stdlib.h>
typedef struct shijian
    {
       int number;
       int time;

    }times;
void suan(char buf[],int m,char a[])
{
    buf[0]=a[m];
    buf[1]=a[m+1];
    buf[2]='\0';
}
void collect(char a[],int num, times t[])
{
    int eh,oh,em,om;
    char buf[10];
    suan(buf,2,a);
    eh=atoi(buf);
   // puts(buf);
    suan(buf,5,a);
    em=atoi(buf);
    //puts(buf);
    suan(buf,8,a);
    oh=atoi(buf);
     // puts(buf);
    suan(buf,11,a);
    om=atoi(buf);
    t[num].time+=(oh-eh)*60+om-em;
}
int main(){
    times t[101];
    int n,i,j,num;
    for(i=0;i<101;i++)
    {
        t[i].number=i;
        t[i].time=0;
    }
    char a[20];
    scanf("%d",&n);
    for(i=0;i<n+1;i++){ 
        gets(a);
        num=a[0]-'0';
        collect(a,num,t);
    }
    for(i=0;i<100;i++)
    {   int p=0;
        for(j=0;j<100;j++)
        {
            if(t[j].time<t[j+1].time)
            {
                int b=t[j].time;
                t[j].time=t[j+1].time;
                t[j+1].time=b;
                 int c=t[j].number;
                t[j].number=t[j+1].number;
                t[j+1].number=c;
                p=1;
            }
        }
        if(p==0)
        break;
    }
    for(i=0;i<101;i++)
    {
        if(t[i].time!=0)
        printf("%d %d\n",t[i].number,t[i].time);
    }
    return 0;
}