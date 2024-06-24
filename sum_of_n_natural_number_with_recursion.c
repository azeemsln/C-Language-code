#include <Stdio.h>
#include <conio.h>
int fact(int);
int main()
{
    int a, b;
    printf("Enrter a number \n");
    scanf("%d", &a);
    b = fact(a);
    printf("sum of first %d natural number is %d", a, b);
    return 0;
}
int fact(int a)
{
    int sum = 0;
    if (a == 0)
    {
        return 0;
    }
    else
        sum = a + fact(a - 1);
    return sum;
}