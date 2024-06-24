
#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[])
{
	int a, A, t, r = 5;
	float si, ta;
	while (1)
	{
		printf("Enter age of client  :\n");
		scanf("%d", &a);
		printf("Enter investement amount  :\n");
		scanf("%d", &A);
		if (a >= 18 && a <= 55 && A >= 10000 && A <= 100000)
		{
			if (a <= 25)
				t = 30;
			else if (a > 40)
				t = 10;
			else
				t = 20;
			si = A * r * t / 100.0;
			printf("Your maturity amount is %f\n\n\n", A + si);
		}
		else
		{
			printf("You are not eligible for the scheme plz entet age between 18 to 55  and amount shoud be under 10000 to 100000\n\n");
		}
	}
}