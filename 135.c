#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int check(char str[],char dst[],int n,int buf[])
{
    int i=0;
    while(str[i]!='\0'&&str[i]<='9'&&str[i]>='0') 
    {
        dst[i]=str[i];
        
        i++;
    }
    dst[i]='\0';
    buf[n]=atoi(dst);
     return i;
     
     
    

}
int main()
{
    int i,j,n=0,buf[100]={0};
    char str[100],dst[20];
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
          
          if(str[i]<='9'&&str[i]>='0')
          {
              i+=check(str+i,dst,n,buf);
              n++;
              
          }
    }
    for (i=0;i<n;i++)
    {   int m=0;
        for (j=0;j<n-1;j++){
            if(buf[j]<=buf[j+1])
            {
                int t=buf[j];
                buf[j]=buf[j+1];
                buf[j+1]=t;
                m=1;
            }
        }
        if(m==0)
        break;
    }
    for (i=0;i<n;i++)
    printf("%d ",buf[i]);
    return 0;
}