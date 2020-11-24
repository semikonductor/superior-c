#include<stdio.h>
int main()
{
	int ba, ma;
	double h1,h2;
	char sex, sport, diet;
	//bianliang
	scanf("%c %d %d %c %c", &sex, &ba, &ma, &sport, &diet);
	switch (sex)
	{
	    case 'M':h1 = (ba + ma) * .54; break;
	    case'F':h1 = (ba * 0.923 + ma) / 2.0; break;

	    default:
		    break;
	}
	h2 = h1;
	if (sport == 'Y')
	{
		h2 = h1 * 1.02;
	}
	if (diet == 'Y')
	{
		h2 = h1 * 1.015;
	}
	printf("%.1fcm", h2);
	return 0;


}
