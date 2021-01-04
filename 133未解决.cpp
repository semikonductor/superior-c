#include <stdio.h>

int main() {
	int n, m, t, i, p = 0;
	scanf("%d%d%d", &n, &m, &t);
	int s[2 * n + 1] = {0}, x[2 * m + 1] = {0};
	for (i = 1; i <= 2 * n; i++)
		scanf("%d", &s[i]);
	for (i = 1; i <= 2 * m; i++)
		scanf("%d", &x[i]);
	int max = (s[2 * n ] > x[2 * m ]) ? s[2 * n ] : x[2 * m];
	int r[2 * max + 3] = {0}; //mubiao
	for (i = 2; i <= 2 * max + 2; i += 2)
		r[i] = i / 2 - 1;//zhishu
	for (i = 2; i <= 2 * n; i += 2) {
		r[s[i] * 2 + 1] += s[i - 1];
	}
	for (i = 2; i <= 2 * m; i += 2) {
		if (t == 0)
			r[x[i] * 2 + 1] += x[i - 1];
		else
			r[x[i] * 2 + 1] -= x[i - 1];
	}
	if (r[1] != 0) {
		printf("%d", r[1]);
		p = 1;
	}
	if (r[3] > 0  )
		printf("+");

	if (r[3] != 0 && r[3] != 1) {
		printf("%dx", r[3]);
		p = 1;
	}

	if (r[3] == 1) {
		printf("x");
		p = 1;
	}
	if (r[3] == -1) {
		printf("-x");
		p = 1;
	}
	for (i = 5; i <= 2 * max + 2; i += 2) {
		if (r[i] == 0)
			continue;
		if (r[i] > 0 && p == 1)
			printf("+");
		if (r[i] != 0) {
			if (r[i] == 1)
				printf("x^%d", r[i + 1 ]);
			if (r[i] != 1 && r[i] != -1)
				printf("%dx^%d", r[i], r[i + 1]);
			if (r[i] == -1)
				printf("-x^%d", r[i + 1 ]);
			p = 1;
		}
	}
	//for (i = 1; i <= 2 * max + 2; i++)
	//	printf("%d ", r[i]);
	return 0;
}