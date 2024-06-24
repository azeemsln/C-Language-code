#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[])
{
	int i, a, b;
	printf("Enter a number  :");
	scanf("%d", &i);
	a = i +1;
	b = i * a/2;
	printf("The sum of first %d Natural number is   %d", i,b);
	getch();
}