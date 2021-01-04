#include<stdio.h>
  int main()
     { int m,n,r,l;
      int i;
      for (i=1;i<5;i++)
      {
      	scanf("%d",&m);
	    n=m/90;
        if(n!=0)
		{
		r=m-n*90;
        if(r>=60)
        l=3*60*(n+1);
        if(r<60)
        l=3*(60*n+r);
        }
        else
        continue;
		printf("%d ",l);
	  }
     
      return 0;
     }
