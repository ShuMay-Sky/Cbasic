#include <stdio.h>
int main(void)
{
	int score = 85;      /* ���_ */
	char grade = 'A';    /* �]�� */
	double pi = 3.14159; /* �~���� */
	int chance = 30;     /* �~���m�� */
	printf("���_��%d�_�A�]���\"%c\"�ł��B\n", score, grade);
	printf("�~�����Ƃ���%.2f��%.3f���g���Čv�Z���Ă��������B\n", pi, pi);
	printf("�~���m����%d%%�ł��B\n", chance);
	return 0;
}