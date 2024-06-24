

#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[])
{
	int a;
	do
	{
		printf("Enter day number between 1 to 7 :\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("hello today is Monday.\n ");
			break;
		case 2:
			printf("hi buddy the day is tuesday.\n");
			break;
		case 3:
			printf("gud morning its wednesday.\n");
			break;
		case 4:
			printf("its thursday\n");
			break;
		case 5:
			printf("mubarak ho aaj jumma hai.\n");
			break;
		case 6:
			printf("great today is saturday.\n");
			break;
		case 7:
			printf("Hurrey the day is Sunday.\n");
			break;
		default:
			printf("please give a valid day number..\n");
		}
	} while (1);
}