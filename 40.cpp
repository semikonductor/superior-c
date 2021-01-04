#include <stdio.h>
#include <math.h>

int main() {
	int n, i, j, buf,  z, p = 1;
	int d;
	int a[100] = {0};
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	//paixu
	for (i = 0; i < n; i++) {
		for (j = 1; j < n - i; j++) {
			if (a[i] < a[i + j]) {
				buf = a[i];
				a[i] = a[i + j];
				a[i + j] = buf;
			}
		}
	}

	d = a[0] - a[1];
	for (i = 0; i < n; i++) {
		z = a[0] - (i) * d;
		if (a[ i] != z) {
			printf("no");
			p = 0;
			break;
		}


	}
	if (p == 1)
		printf("%d", d);


	return 0;
}