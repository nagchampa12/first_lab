#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{   
	char* countries[6] = { "Belarus","Russia","Ukraine","Poland","Lithuania","Latvia" };
	char* capital[6] = { "Minsk","Moscow","Kyiv","Warsaw","Vilnius","Riga" };
	char* word=" ";
	scanf("%s", &word);
	for (int i = 0 ;i < 6;i++)
	{
		if (strcmp(&word, countries[i])==0)
		{
			printf("the capital of %s is %s ", countries[i], capital[i]);
			getch();
			return 0;
		}

	}
	printf("There is no such country in the list");
	getch();
	return 0;
}
