#include <stdio.h>

void Sort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				// Swap the elements
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[10];

	// Taking input from the user
	printf("Enter 10 numbers:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	// Calling the sorting function
	Sort(arr, 10);

	// Displaying the sorted array
	printf("Sorted array:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
