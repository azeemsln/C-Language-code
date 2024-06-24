#include <stdio.h>
#include <conio.h>
void f(int a);
int main()
{
	int x;
	printf("Enter a number :");
	scanf("%d", &x);
	f(x);
}
void f(int a)
{
	int i;
		if (a > 0)
		{
			f(a - 1);
			printf("%d, ", 2 * a - 1);
		}
}