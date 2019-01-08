#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	char ary[11];
	char ch;
	int i = 0, tot = 0, weight = 1;

	
	while (1) {
		ch = getchar();
		if (ch == '\n') break;
		ary[i] = ch;
		i++;
	}
	ary[i] = '\0'; //마지막문자를 nul로 만들어준다.

	while (i > 0) {
		i--;
		tot += weight * (ary[i] - 48);
		weight *= 10;
		
	}
	printf("%d", tot+10);
	return 0;
}