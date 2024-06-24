#include <stdio.h>
#include <conio.h>
void prime(int a, int b)
{
    int i, j;
    while (a < b)
    {
        for (i = 2; i < a; i++)
        {
            if (a % i == 0)
                break;
        }
        if (i == a)
        {
            printf("%d  ", a);
            a++;
        }
        else
            a++;
    }
}
int main()
{
    int a, b, s;
    printf("Enter two number\n");
    scanf("%d %d", &a, &b);
    printf("All prime numbers between %d and %d is\n", a, b);
    prime(a, b);
    getch();
}