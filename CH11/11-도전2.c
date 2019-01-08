#include <stdio.h>

int main(void) {

	char ch;

	while (1) {
		ch = getchar();
		if (ch == "\n") break;
		if (ch >= 'A' && ch <= 'Z') ch += 32;
		else if (ch >= 'a' && ch <= 'z') ch -= 32;
		putchar(ch);
	}

	return 0;

}