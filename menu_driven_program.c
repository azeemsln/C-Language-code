#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c;
	float f, d, e;
	do
	{
		printf("Choose any one option :\n"
			   " 1.Addition \n"
			   "2. substraction\n "
			   "3. Multiplication\n "
			   "4. Division\n"
			   "5.Exit \n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("Enter two number :\n");
			scanf("%d\n %d", &b, &c);
			printf("The sum of %d and %d is %d\n\n", b, c, b + c);
			break;
		case 2:
			printf("Enter Two numbers ;'\n");
			scanf("%d\n %d", &b, &c);
			printf("The substraction of %d and %d is %d\n\n", b, c, b - c);
			break;
		case 3:
			printf("Enter two numbers :\n");
			scanf("%d\n %d", &b, &c);
			printf("The muliplication of %d and %d is %d\n\n", b, c, b * c);
			break;
		case 4:
			printf("Enter two numbers :\n");
			scanf("%f\n %f", &d, &e);
			printf("The division of %f and %f is %f\n\n", d, e, d * 1.0 / e);
			break;
		case 5:
			printf("exit the program .\n\n");
			break;
		default:
			printf("choose a valid option\n\n.");
		}
	}
		while (1);
}