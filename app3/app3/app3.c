#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	printf("������� a, b, c\n");
	scanf_s("%f%f%f", &a, &b, &c);
	if (a < b + c && b < a + c && c < a + b)
	{
		printf("����������� ����������");
	}
	else
	{
		printf("����������� �� ����������");
	}
	getch();
	return 0;
}   