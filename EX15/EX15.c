#include <stdio.h>
int main(void)
{
	int koku = 75; /* ����̓��_ */
	int san = 93; /* �Z���̓��_ */
	int sya = 68; /* �Љ�̓��_ */
	printf("�����%d�_�A�Z����%d�_�A�Љ��%d�_�ł��B\n", koku, san, sya);
	printf("���ϓ_��%d�_�ł��B\n", (koku + san + sya) / 3);
	return 0;
}