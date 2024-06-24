#include <stdio.h>

int main()
{
    int matrix1[3][3], matrix2[3][3], result[3][3];

    // Input the elements of the first matrix
    printf("Enter elements of the first 3x3 matrix:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input the elements of the second matrix
    printf("Enter elements of the second 3x3 matrix:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the multiplication of the matrices
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; ++k)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix (product of the two matrices)
    printf("\nResult Matrix (Multiplication of the two matrices):\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
