#include <stdio.h>
int main(void)
{
	int height, weight;
	printf("êgí∑Çì¸óÕÇµÇƒÇ≠ÇæÇ≥Ç¢ (cm) > ");
	scanf("%d", &height);
	printf("ëÃèdÇì¸óÕÇµÇƒÇ≠ÇæÇ≥Ç¢ (kg) > ");
	scanf("%d", &weight);
	printf("BMIÇÕ %f Ç≈Ç∑ÅB\n", weight / (((double)height / 100) * ((double)height / 100)));
	return 0;
}