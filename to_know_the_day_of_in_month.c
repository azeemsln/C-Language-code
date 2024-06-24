#include<stdio.h>
#include<conio.h>
int main(int argc, char *argv[])
{
	int a,b=31,c=30,d;
	printf("Enter month number  \n");
	scanf("%d",&a);
	if (a==1 || a==3 || a==5 || a==7 || a== 8 || a==10 || a==12)
	{
		printf("The number of days in this month is %d",b);
	}
		else if (a==4 || a==6 || a==9 || a==11)
		{
				printf("The number of days in this month is %d",c);
		}
		else if (a==2)
		{
				printf("The days of in this month is either 28 or 29");
		}
	else
		 printf("Enter valid month number"); 
}