#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	printf("введите a, b, c\n");
	scanf_s("%f%f%f", &a, &b, &c);
	if (2*a > c || 2*a > b)
	{
		printf("не пройдет");
	}
	else
	{
		printf("пройдет");
	}
	getch();
	return 0;
}