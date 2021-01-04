#include<stdio.h>
int main()
    {
    	int t,w,m,c,a,n;
    	scanf("%d%d%d",&t,&w,&c);
    	m=c%10;
    	printf("%d ",m);
		if(t>5)
    	a=0;
    	if(t<5)
    	{ if(w<200)
    	  n=0;
    	  if(w>=200&&w<400)
    	  { if(t==1&&(m==1||m==6))
    	     n=1;
    	    
    	    else if(t==2&&(m==2||m==7))
    	     n=1;
    	     
    	      else if(t==3&&(m==3||m==8))
    	     n=1;
    	     
    	     else if(t==4&&(m==4||m==9))
    	     n=1;
    	     
    	     else if(t==5&&(m==5||m==0))
    	     n=1;
    	     else
    	     n=0;
		  }
		  if(w>=400)
		  { if((t==1||t==3||t==5)&&(m==1||m==3||m==5||m==7||m==9))
		    n=1;
		   
		    else if((t==2||t==4)&&(m==0||m==2||m==4||m==6||m==8))
		    n=1;
		    else
		    n=0;
		  }
		  
		
		}
		if(n==1)  
		printf("yes")  ;
		else
		printf("no")  ;
    }
