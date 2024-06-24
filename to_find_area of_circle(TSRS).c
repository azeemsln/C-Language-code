#include<stdio.h>
#include<conio.h>
float area(float);
int main()
{
	float x,y;
	printf("enter radius of circle  ");
	scanf("\n %f",&x);
	y=area(x);
	printf("The area of circle is  %f",y);
	return 0;
}

float area(float a )
{
	float b;
	b=3.14*a;
	return b;
}
	 