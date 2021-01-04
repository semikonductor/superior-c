#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int ou[100 ] = {0}, ji[100 ] = {0};
	int i, j = 0, h, o = 0, ii, buf;
	for (i = 0; i < n; i++) {
		scanf("%d", &h);
		if (h % 2 == 0) {
			ou[o] = h;
			o++;
		} else {
			ji[j] = h;
			j++;
		}
	}//分数列
	for (ii = 0; ii < o; ii++) {
		for (i = 0; i < o; i++) {
			if (ou[i] < ou[i + 1]) {
				buf = ou[i];
				ou[i] = ou[i + 1];
				ou[i + 1] = buf;
			}
		}
	}//排序
	for (ii = 0; ii < j; ii++) {
		for (i = 0; i < j; i++) {
			if (ji[i] < ji[i + 1]) {
				buf = ji[i];
				ji[i] = ji[i + 1];
				ji[i + 1] = buf;
			}
		}
	}//排序
	for (i = 0; i < o; i++) {
		printf("%d ", ou[i]);
	}
	for (i = 0; i < j; i++) {
		printf("%d ", ji[i]);
	}//输出
	return 0;


}