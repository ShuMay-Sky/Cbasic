#include <stdio.h>
int main(void)
{
	int a, b;
	int sum; /* ���Z�̌��ʂ�������ϐ� */
	/* �ϐ�a��b�ɃL�[�{�[�h���琮������� */
	printf("���� a > ");
	scanf("%d", &a);
	printf("���� b > ");
	scanf("%d", &b);
	/* ���Z�̌��ʂ�ϐ��ɑ�� */
	sum = a + b;
	/* a + b �� a - b �̌��ʂ�\�� */
	printf("a + b �̌��ʂ� %d�Aa - b �̌��ʂ� %d �ł��B\n", sum, a - b);
	return 0;
}