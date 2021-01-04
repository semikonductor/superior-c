#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[n][n] = {0};
	int i, j, x, y, z = 1, p;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	//shurujizhen
	x = 0;
	y = 0;
	printf("%d ", a[x][y]);
	while (1) {
		if (x == 0 && y != n - 1 || x == n - 1 && y != 0) {
			y++;
			printf("%d ", a[x][y]);
			if (y == n - 1 && x == n - 1)
				break;

			if (z % 2 == 1) {
				while (p != 1) {
					y--;
					x++;
					printf("%d ", a[x][y]);
					if (x == n - 1 || y == 0)
						p = 1;
				}
				p = 0;
			}
			if (z % 2 == 0) {
				while (p != 1) {
					x--;
					y++;
					printf("%d ", a[x][y]);
					if (x == 0 || y == n - 1)
						p = 1;
				}
				p = 0;
			}
			z++;
		}

		if (y == 0 && x != n - 1 || y == n - 1 && x != 0) {
			x++;
			printf("%d ", a[x][y]);
			if (z % 2 == 1) {
				while (p != 1) {
					y--;
					x++;
					printf("%d ", a[x][y]);
					if (x == n - 1 || y == 0)
						p = 1;
				}
				p = 0;
			}
			if (z % 2 == 0) {
				while (p != 1) {
					x--;
					y++;
					printf("%d ", a[x][y]);
					if (x == 0 || y == n - 1)
						p = 1;
				}
				p = 0;
			}
			z++;
		}
		if (x == 0 && y == n - 1) {
			x++;
			printf("%d ", a[x][y]);
			if (z % 2 == 1) {
				while (p != 1) {
					y--;
					x++;
					printf("%d ", a[x][y]);
					if (x == n - 1 || y == 0)
						p = 1;
				}
				p = 0;
			}
			if (z % 2 == 0) {
				while (p != 1) {
					x--;
					y++;
					printf("%d ", a[x][y]);
					if (x == 0 || y == n - 1)
						p = 1;
				}
				p = 0;
			}
			z++;
		}
		if (x == n - 1 && y == 0) {
			y++;
			printf("%d ", a[x][y]);
			if (z % 2 == 1) {
				while (p != 1) {
					y--;
					x++;
					printf("%d ", a[x][y]);
					if (x == n - 1 || y == 0)
						p = 1;
				}
				p = 0;
			}
			if (z % 2 == 0) {
				while (p != 1) {
					x--;
					y++;
					printf("%d ", a[x][y]);
					if (x == 0 || y == n - 1)
						p = 1;
				}
				p = 0;
			}
			z++;
		}
	}

	return 0;

}
