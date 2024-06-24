#include <stdio.h>
#include <conio.h>
int main()
{
    int a, sum = 0, c;
    printf("Enter a number\n");
    scanf("%d", &a);
    while (a != 0)
    {
        c = a % 10;
        sum = sum + c;
        a = a / 10;
    }
    printf("The sum of digit of number %d", sum);
    return 0;
}