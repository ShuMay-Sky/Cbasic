#include <stdio.h>
int main(void)
{
	int a, b;
	printf("整数 1 > ");
	scanf("%d", &a);
	printf("整数 2 > ");
	scanf("%d", &b);
	/* 加算の結果を変数に代入 */
	printf("%d + %d は %d\n", a, b, a + b);
	printf("%d - %d は %d\n", a, b, a - b);
	printf("%d * %d は %d\n", a, b, a * b);
	printf("%d / %d は %d\n", a, b, a / b);
	printf("%d %% % %d は %d\n", a, b, a % b);
	return 0;
}
