#include <stdio.h>

int main(void) {
	char ch;
	int len, max = 0;

	while (1) 
	{
		len = 0;

		ch = getchar();
		if (ch == -1)break;
		while (1) 
		{
			len++;
			ch = getchar();
			if (ch == '\n') break;
		}
		if (max < len) max = len;
	}
	printf("���� �� �ܾ��� ����; %d\n", max);

	return 0;
}
