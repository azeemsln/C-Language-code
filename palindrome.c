#include <stdio.h>
#include <conio.h>
#include <string.h>
int isPalindrome(char *);
int main()
{
    char arr[20];
    printf("Enter a name\n");
    scanf("%s", arr);
    if (isPalindrome(arr))
    {
        printf("its a palindrome\n");
    }
    else
    {
        printf("Its not a palindrome\n");
    }
    return 0;
}
int isPalindrome(char *a)
{
    int i, j, k;
    k = strlen(a);
    for (i = 0, j = k - 1; i < j; ++i, --j)
    {
        if (a[i] != a[j])
        {
            return 0;
        }
    }
    return 1;
}