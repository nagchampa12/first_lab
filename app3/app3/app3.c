#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	printf("введите a, b, c\n");
	scanf_s("%f%f%f", &a, &b, &c);
	if (a < b + c && b < a + c && c < a + b)
	{
		printf("треугольник существует");
	}
	else
	{
		printf("треугольник не существует");
	}
	getch();
	return 0;
}   