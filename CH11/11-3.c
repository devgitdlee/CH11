#include <stdio.h>

int main(void) {
	char cap[26] = { 'A' };
	char small[26];
	int i;

	for (i = 1; i < 26; i++) {
		cap[i] = cap[i - 1] + 1;
	}
	printf("대문자:");
	for (i = 1; i < 26; i++) {
		printf("%c", cap[i]);
	}

	printf("\n");
	printf("소문자:");
	for (i = 1; i < 26; i++) {
		if ((cap[i] >= 'A') && (cap)) {
			small[i] = cap[i] + 'a';
		}
		printf("%c", small[i]);
	}
	
	return 0;
}