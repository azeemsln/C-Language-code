#include <stdio.h>
#include <conio.h>
int main()
{
    int x, i = 2;
    while (1)
    {
        printf("Enter a number to check wheather it is prime or not\n");
        scanf("%d", &x);
        for (i = 2; i < x; i++)
        {
            if (x % i== 0)
                break;
        }
        if (i == x)
        {
            printf("%d is a prime number\n\n", x);
        }
        else
            printf("%d is not a prime number\n\n", x);
    }
    // getch();
}