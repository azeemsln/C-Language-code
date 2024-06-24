#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[])
{
	int a, b;
	printf("Enter a number   ");
	scanf("%d", &a);
	for (b = 2; b < a; b++)
	{
		if (a % b == 0)
			break;
	}
	if (b == a)
		printf("%d is a prime number  ", a);
	else
		printf("%d is not a prime number", a);
		return(0);
}