#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	printf("������� a, b, c\n");
	scanf_s("%f%f%f", &a, &b, &c);
	if (2*a > c || 2*a > b)
	{
		printf("�� �������");
	}
	else
	{
		printf("�������");
	}
	getch();
	return 0;
}