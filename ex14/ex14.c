#include <stdio.h>
int main(void)
{
	int a, b;
	int sum, hiki, jo, jou, amari; /* ���Z�̌��ʂ�������ϐ� */
	/* �ϐ�a��b�ɃL�[�{�[�h���琮������� */
	printf("���� 1 > ");
	scanf("%d", &a);
	printf("���� 2 > ");
	scanf("%d", &b);
	/* ���Z�̌��ʂ�ϐ��ɑ�� */
	printf("d% + d% �� d%");a, b,  sum = a + b;
	/* a + b �� a - b �̌��ʂ�\�� */
	printf("a + b �̌��ʂ� %d�Aa - b �̌��ʂ� %d �ł��B\n", sum, a - b);
	return 0;
}