#include <stdio.h>
int main()
{
	int a, b, c,d,s,i,temp3,temp1,temp2,j;
	

	scanf("%d", &c);
	int buf[100];
	int h[100];
	for (i = 0; i < c; i++)
	{

		scanf("%d", &buf[i]);
	}
	for (i = 0; i < c; i++)
	{
	    b=0; 
		s = 0;
		d = buf[i];
		while (d > 0)
		{

			b = d % 10;
			s = b + s;
			d = d / 10;

		}
		h[i] = s;
		
	}
	    for (j=0;j<10;j++)
	    {
		
			for ( i = 0; i < c; i++)
			{
				if ((h[i] == h[i + 1]) && (buf[i] > buf[i + 1]))
				{
					temp3 = buf[i];
					buf[i] = buf[i + 1];
					buf[i + 1] = temp3;
				}
		
		

				if (h[i] < h[i + 1]) 
				{
					temp1 = h[i];
					h[i] = h[i + 1];
					h[i + 1] = temp1;
					temp2 = buf[i];
					buf[i] = buf[i + 1];
					buf[i + 1] = temp2;
				}
			}
		}
		
	for ( i = 0; i < c; i++)
	{  
		
			printf("%d %d\n", buf[i], h[i]);

	

	}
	return 0;

}
