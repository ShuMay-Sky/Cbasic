#include <stdio.h>
int main(void)
{
	char initial;
	int age;
	double height;
	printf("�����̓���������͂��Ă������� > ");
	scanf("%c", &initial);
	printf("�N�����͂��Ă������� > ");
	scanf("%d", &age);
	printf("�g������͂��Ă������� > ");
	scanf("%lf", &height);
	printf("%c����̔N���%d�΁A�g����%.1fcm�ł��B\n", initial, age, height);
	return 0;
}