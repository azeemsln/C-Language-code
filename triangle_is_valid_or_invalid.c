#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	while(1)
	{
		printf("Enter three side of triangle  \n");
		scanf("%d" "%d"  "%d",&a,&b,&c);
		if (a+b>c && b+c>a && a+c>b)
			printf("valid triangle");
		else
			printf("invalid triangle");
		printf("\n");
	}
}