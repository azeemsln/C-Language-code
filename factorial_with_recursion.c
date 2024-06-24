#include <stdio.h>
#include <conio.h>
int fac(int);
int main()
{
	int x, y;
	while (1)
	{
		printf("Enter a number  ");
		scanf("%d", &x);
		y = fac(x);
		printf("%d\n\n", y);
		return 0;
	}
}
int fac(int n)
{
	if (n == 1 || n==0)
	{
		return 1;
	}
	else
		return n * fac(n - 1);
}