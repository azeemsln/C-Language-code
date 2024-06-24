//L=a>b?a:b     it means if a is greater than b then asign a in L else asign b on L//
#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b ,i=2,L;
	printf("Enter two numbers  \n");
	scanf("%d  \n%d",&a,&b);
	for(L=a>b?a:b;L<=a*b;L++)
		if( L%b==0 && L%a==0)
			break;
	printf("The LCM of %d and %d is %d",a,b,L);
	printf("\n");
	return(0);
}