#include<stdio.h>
#include<string.h>
int main(){
    char str[90],buf;
    int i=0,j,l;
    while( scanf("%c",&buf),buf!='\n')
    {
        if(buf<='z'&&buf>='a')
        buf-=32;
        str[i]=buf;
        i++;
    }
    str[i]='\0';
    l=i;
    for(i=0;i<l;i++)
    {
        for(j=1;j<l-i;j++){
                if(str[i]>'9'){
                    if(str[i]>str[i+j]&&str[j+i]>'9')
                    {
                    buf=str[i];
                    str[i]=str[j+i];
                    str[j+i]=buf;
                    }
                }
        }
    }
puts(str);
return 0;
}