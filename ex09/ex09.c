#include <stdio.h>
int main(void)
{
	char initial = 'M';
	int age = 42;
	double height = 164.5;
	printf("%cさんの年齢は%d才、身長は%.2fcmです。",initial, age, height);
	return 0;
}