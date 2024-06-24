#include <stdio.h>
#include <conio.h>
int main()
{
    int a[50], size, num, pos;
    printf("Enter size of array\n");
    scanf("%d", &size);
    printf("Enter elements of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", i[a]);
    }
    printf("\n");
    printf("enter a number to insert\n");
    scanf("%d", &num);
    printf("Enter position in array where you want to insert\n");
    scanf("%d", &pos);
    for (int i = size - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = num;
    size++;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}