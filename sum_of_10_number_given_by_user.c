#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,s,sum=0;
	printf("Enter 10 numbers \n");
	for (i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	sum=sum+a[i];
	printf("The sum of these numbers is %d",sum);
	return 0;
}