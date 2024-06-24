#include <stdio.h>
#include <conio.h>
int main()
{
	int a;
	while (1)
	{
		printf("Enter a number  ");
		scanf("%d", &a);
		if (a >= 0)
		{
			printf("%d is a positive number.\n\n", a);
		}
		else
		{
			printf("%d is a negative number\n\n", a);
		}
	}
}