#include <stdio.h>
int main(void)
{
	int a, b;
	printf("���� 1 > ");
	scanf("%d", &a);
	printf("���� 2 > ");
	scanf("%d", &b);
	/* ���Z�̌��ʂ�ϐ��ɑ�� */
	printf("%d + %d �� %d\n", a, b, a + b);
	printf("%d - %d �� %d\n", a, b, a - b);
	printf("%d * %d �� %d\n", a, b, a * b);
	printf("%d / %d �� %d\n", a, b, a / b);
	printf("%d %% % %d �� %d\n", a, b, a % b);
	return 0;
}
