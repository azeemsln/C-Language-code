#include <stdio.h>
#include <conio.h>
void f1(int a);
int main(int argc, char *argv[])
{
	int x;
	while (1)
	{
		printf("Enter a number :");
		scanf("%d", &x);
		f1(x);
		printf("\n");
	}
}
void f1(int a)
{
	if (a > 0)
	{
		printf("%d, ", a);
		f1(a - 1);
	}
}