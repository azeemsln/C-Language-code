#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b;
	while (1)
	{
		printf("Enter a number ");
		scanf("%d", &a);
		b = a % 10;
		printf("The last digit of %d is %d\n\n", a, b);
	}
}