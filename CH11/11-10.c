#include <stdio.h>

void my_gets(char *str, int size) {
	char ch;
	int i = 0;

	ch = getchar();

	while ((ch != '\n') && (i < size - 1)) {
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';

}

int main(void) {

	char str[7];
	while (1) {
		my_gets(str, sizeof(str));

		printf("입력한 문자열 : %s\n", str);

	}
	return 0;
}