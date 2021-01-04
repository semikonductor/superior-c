#include <stdio.h>

int main() {
	int n, m, c, i, j, p = 1, q, num = 0;
	scanf("%d%d%d", &n, &m, &c);
	c = c - 1;
	char a[n][m + 1];
	int cx[100] = {0}, cy[100] = {0};
	for (i = 0; i < n; i++) {
		scanf("%s", &a[i]);
	}
	i = 0;
	j = c;
	cx[0] = i;
	cy[0] = j;
	while (i != -1 && j != -1 && i != n  && j != m ) {
		if (a[i][j] == 'N')
			i--;
		else if (a[i][j] == 'S')
			i++;
		else if (a[i][j] == 'W')
			j--;
		else if (a[i][j] == 'E')
			j++;

		for (q = 0; q < p - 1; q++) {
			if (cx[q] == i && cy[q] == j)
				num = 1;
		}
		if (num == 1) { //loop
			printf("loop %d", p);
			break;
		}
		cx[p] = i;
		cy[p] = j;
		p++;
		//cunzuobiao
	}
	if (num == 0)
		printf("out %d", p - 1);
	return 0;
}