#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char buf[100], str[100];
	gets(buf);
	int l, i, c = 0, p = 0;
	l = strlen(buf);
	for (i = 0; i < l; i++) {
		if (buf[i] <= '9' && buf[i] >= '0') {
			str[c] = buf[i];
			c++	;
		}
	}
	str[c] = '\0';
	int shu = atoi(str);

	i = 0;
	if (shu == 0 || shu == 1 || shu == 2)
		printf("0");
	else {
		for (i = shu - 1; i >= 2; i--) {
			if (shu % i == 0) {
				printf("%d", i);
				p = 1;
				break;

			}
		}
	}
	if (p == 0)
		printf("0");

	return 0;

}