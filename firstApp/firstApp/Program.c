#include <stdio.h>      
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "rus");
    int a, d, n, sum = 0;
    printf("введите a, n, d\n");
    scanf_s("%i%i%i", &a, &n, &d);
    for (int i = 1; i <= n; i++)
    {
        int result;
        result = a + (i - 1) * d;
        sum += result;
        printf("\n%i член арифмитической прогресии равен %i", i, result);
    }
    printf("\n%i - сумма членов арифмитической прогрессии", sum);
    getch();
    return 0;
}