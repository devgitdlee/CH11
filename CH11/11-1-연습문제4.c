#include <stdio.h>

int main(void) {
	int num, grade;

	printf("가장 종아하는 숫자: ");
	scanf("%d", &num);
	//getchar();	//버퍼에서 한문자를 읽어들여서 버린다.
	//fflush(stdin);
	fgetc(stdin);
	printf("가장 종아하는 알파벳: ");
	grade = getchar();
	printf("%d, %c", num, grade);

	return 0;
}