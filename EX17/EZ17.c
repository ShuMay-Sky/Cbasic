#include <stdio.h>
int main(void)
{
	int height, weight;
	printf("�g������͂��Ă������� (cm) > ");
	scanf("%d", &height);
	printf("�̏d����͂��Ă������� (kg) > ");
	scanf("%d", &weight);
	printf("BMI�� %f �ł��B\n", weight / (((double)height / 100) * ((double)height / 100)));
	return 0;
}