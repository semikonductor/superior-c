#include<stdio.h>
#include <string.h>
#include<stdlib.h>
typedef struct  wdnmd 
    {
       char num[21];
       int all;
       int eng;
    }inf;
void exchange(inf s[],int i,int *p)
{   inf buf;
    buf=s[i];
    s[i]=s[i+1];
    s[i+1]=buf;
    (*p)++;
}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    inf s[m];
    int i,j,p,l;
    char numb[20];
    int numb1,numb2;
    for(i=0;i<m;i++)
        scanf("%s%d%d",s[i].num,&s[i].all,&s[i].eng);
    for(j=0;j<m;j++){ p=0;
        for(i=0;i<m-1;i++)
        {
            if(s[i].all<s[i+1].all)
                 exchange (s,i,&p);
            if(s[i].all==s[i+1].all)
            {
                if(s[i].eng<s[i+1].eng)
                exchange(s,i,&p);
                if(s[i].eng==s[i+1].eng)
                {
                    for(l=0;l<strlen(s[i].num);l++)
                        numb[l]=s[i].num[l+2];
                    numb1=atoi(numb);
                    for(l=0;l<strlen(s[i].num);l++)
                        numb[l]=s[i+1].num[l+2];
                    numb2=atoi(numb);
                    if(numb1>numb2)
                        exchange(s,i,&p);
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s %d %d\n",s[i].num,s[i].all,s[i].eng);
    }
    return 0;
}
