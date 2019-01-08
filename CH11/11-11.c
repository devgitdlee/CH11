#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, grade;

	printf("학번 입력: ");
	scanf("%d", &num);
	//getchar();	//버퍼에서 한문자를 읽어들여서 버린다.
	//fflush(stdin);
	fgetc(stdin);
	printf("학점 입력: ");
	grade = getchar();
	printf("학번: %d, 학점 : %c", num, grade);

	return 0;
}
