#include <stdio.h>
int main()
{
	int h,m,a,b;
	scanf("%d:%d",&h,&m);
	if(h<9&&m<22)
	printf("8:00 a.m.-10:16 a.m.");
	if(h==9&&m>22)
	printf("9:43 a.m.-11:52 a.m.");
    if(h==10)
	printf("9:43 a.m.-11:52 a.m.");
	if(h==11&&m<10)
	printf("9:43 a.m.-11:52 a.m.");


}


