#include<stdio.h>
#include<conio.h>
int swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter a number :\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf(" a= %d  b=%d",a,b);
    return 0;
}
int swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;

   
}