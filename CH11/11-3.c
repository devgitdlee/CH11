#include <stdio.h>

int main(void) {
	char cap[26] = { 'A' };
	char small[26];
	int i;

	for (i = 1; i < 26; i++) {
		cap[i] = cap[i - 1] + 1;
	}
	printf("�빮��:");
	for (i = 1; i < 26; i++) {
		printf("%c", cap[i]);
	}

	printf("\n");
	printf("�ҹ���:");
	for (i = 1; i < 26; i++) {
		if ((cap[i] >= 'A') && (cap)) {
			small[i] = cap[i] + 'a';
		}
		printf("%c", small[i]);
	}
	
	return 0;
}