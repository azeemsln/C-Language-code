#include<stdio.h>
#include<conio.h>

int main(int argc, char *argv[])

{
	char x;
	printf("Enter a character ");
	scanf("%c",&x);
	if (x>='A' && x<='Z')
		printf("upper case alphabet");
	else if (x>='a' && x<='z')
		printf("lower case alphabet");
	else if (x>='0' && x<='9')
		printf("a digit");
	else
		printf("an special character");
		getch();
	
}