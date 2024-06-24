#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {

        a[i] = arr[4 - i];
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i] = a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}