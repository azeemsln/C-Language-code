#include <stdio.h>
#include <conio.h>
void f(int);
int main()
{
	int x, y;
	while (1)
	{
		printf("Enter a number  ");
		scanf("%d", &x);
		f(x);
		printf("\n\n");
	}
}
void f(int n)
{
	if (n > 0)
	{
		f(n - 1);
		printf("%d ,", n);
	}
}