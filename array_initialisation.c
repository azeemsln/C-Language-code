#include <stdio.h>
#include <conio.h>
int main()
{
    int a[3][3] = {6, 2, 5, 0, 1, 3, 4, 9, 8};
    int *p;
    p = a[0];
    printf("%u %u %u %u %u %u %u %u", p, a, a[0], &a, a, *a, *(a + 1), &a[0][0]);
}