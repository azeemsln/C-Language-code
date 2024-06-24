#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[])
{
	int a, b, c, d;
	do
	{
		printf("choose any one option  ;\n 1.To check whether a triangle is isosceles.\n 2. To check a triangle is right angle triangle. \n 3. To check a triangle is equilateral riangle.\n  4. Exit\n\n");
		scanf("%d", &a);

		switch (a)
		{
		case 1:
			printf("Enter three side of triangle :\n");
			scanf("%d \n%d\n%d", &b, &c, &d);
			if (b == c || b == d || c == d)
			{
				printf("The triangle is isosceles.\n");
			}
			else
			{
				printf("The triangle is not isosceles.\n");
			}
			break;
		case 2:
			printf("Enter three side of triangle :\n");
			scanf("%d \n%d\n%d", &b, &c, &d);
			if (b * b + c * c == d * d || c * c + d * d == b * b || d * d + b * b == c * c)
			{
				printf("The triangle is a right angle triangle.\n");
			}
			else
			{
				printf("The triangle is not a right angle triangle. \n");
			}
			break;
		case 3:
			printf("Enter three side of triangle :\n");
			scanf("%d \n%d\n%d", &b, &c, &d);
			if (b == c && b == d && c == d)
			{
				printf("The triangle is equilateral triangle.\n");
			}
			else
			{
				printf("The triangle is not a equilateral triangle.\n");
			}
			break;
		case 4:
			printf("Exit the program.\n");
			break;
		default:
			printf("Choose valid option");
		}
	} while (1);
}