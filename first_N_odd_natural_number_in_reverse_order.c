#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[])
{
	int i;
	while (1)
	{
		printf("Enter a number \n");
		scanf("%d", &i);
		printf("The first %d natural odd number in reverse order are\n", i);
		while (i > 0)
		{
			printf("%d\n", 2 * i - 1);
			i--;
		}
		getch();
	}
}