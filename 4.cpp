#include<stdio.h>
#include<string.h>
void ql(char x[])
{
	int i;
	for(i=0;i<300;i++)
	x[i]='\0';
}
int main(){
	char s[300]={0},buf[300];
	
	int i=0,l,q=0;
	char c;
    while(1 )
    {   
    
        c=getchar();
	    if(c=='\n')
	    break;
        scanf("%s",buf);
    	if(buf[0]='-')
    	{
    		strcat(s,buf);
    	    l=strlen(s);
    	    s[l+1]=' ';
    	    q=1;
		
    	}
    	ql(buf);
    
    	puts(buf);
    }
    if(q==1)
	//puts(s);
	if(q==0)
	printf("no");
    return 0;
    
}
