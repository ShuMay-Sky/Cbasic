#include <stdio.h>
int main(void)
{
	char initial;
	int age;
	printf("�����̓���������͂��Ă������� > ");
	scanf("%c", &initial);
	printf("�N�����͂��Ă������� > ");
	scanf("%d", &age);
	printf("%c����̔N���%d�΂ł��B\n", initial, age);
	return 0;
}