#include <stdio.h>
#include <conio.h>
void swap(int *, int *);
int main()
{
    int a = 15, b = 20;
    // printf("Enter two number  :\n");
    // scanf("%d %d", &a, &b);
    printf("a= %d b=%d\n", a, b);
    swap(&a, &b);
    printf("a= %d  b=%d", a, b);
    return 0;
}
void swap(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}