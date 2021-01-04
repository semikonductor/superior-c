#include <stdio.h>

int main() {
	int n, p = 0, q = 0;

	scanf("%d", &n);
	//È¡Ä©Î²Êý×Ö
	int i = 0, c, b, sum = 0;
	int a[10] = {0};
	int z[11] = {0};

	b = n;
	while (b > 0) {
		c = b % 10;
		b = b / 10;
		a[i] = c;
		i++;
		p++;
		sum += c;
	}//test


	for (i = 0; i < p; i++) {
		z[p - i - 1] = a[i];
	}

	for (i = 0; i < p; i++) {
		if (z[i] != a[i])
			q = 1;
	}
	if (q == 1)
		printf("no");
	if (q == 0)
		printf("%d", sum);
	return 0;



}