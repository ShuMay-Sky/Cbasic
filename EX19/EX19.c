#include <stdio.h>
int main(void)
{
	int i;
	printf("���̐�������͂��Ă������� > ");
	scanf("%d", &i);
	if (i % 2)
		printf("%d�͊�ł��B\n", i);
	else
		printf("%d�͋����ł��B\n", i);
	return 0;
}