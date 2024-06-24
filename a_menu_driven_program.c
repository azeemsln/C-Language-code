// write a menu driven program
#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, x;
	while (1)
	{
		printf("1.  Addition");
		printf("\n2.  Substraction");
		printf("\n3.   multiplication");
		printf("\n4.   division");
		printf("\n5.  exit");
		printf("\nEnter your choice\n");
		scanf("%d", &x);
		switch (x)
		{
		case 1:
			printf("Enter two numbers\n");
			scanf("%d"
				  "%d",
				  &a, &b);
			printf("The sum of %d and %d is %d", a, b, a + b);
			printf("\n\n");
			break;
		case 2:
			printf("Enter two numbers  \n");
			scanf("%d"
				  "%d",
				  &a, &b);
			printf("The substraction of %d and %d is %d", a, b, a - b);
			printf("\n\n");
			break;
		case 3:
			printf("Enter two numbers \n");
			scanf("%d %d", &a, &b);
			printf("The multiplication of %d and %d is %d", a, b, a * b);
			printf("\n\n");
			break;
		case 4:
			printf("Enter two.numbers \n");
			scanf("%d"
				  "%d",
				  &a, &b);
			printf("The quotient of %d and %d is %d \n", a, b, a / b);
			printf("\n\n");
			break;
		default:
			printf("invalid choice\n\n");
		}
	}
	getch();
}