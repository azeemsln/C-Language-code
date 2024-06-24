#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c;
	do
	{
		printf("Enter two number\n");
		scanf("%d %d", &a, &b);
		c = a + b;
		printf("the sum of %d and %d = %d", a, b, c);
		printf("\n\n\n");
	}
	 while (1);
}