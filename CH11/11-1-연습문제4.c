#include <stdio.h>

int main(void) {
	int num, grade;

	printf("���� �����ϴ� ����: ");
	scanf("%d", &num);
	//getchar();	//���ۿ��� �ѹ��ڸ� �о�鿩�� ������.
	//fflush(stdin);
	fgetc(stdin);
	printf("���� �����ϴ� ���ĺ�: ");
	grade = getchar();
	printf("%d, %c", num, grade);

	return 0;
}