#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char ch;
	int res;
	while (1) {
		res = scanf("%c", &ch);
		if (res == EOF) break;
		printf("%d ", ch);

	}
	return 0;

}