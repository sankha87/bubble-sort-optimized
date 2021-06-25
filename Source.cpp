// C program for implementation of Bubble sort - best case time complexity
// Optimized Bubble Sort Algorithm
#include <stdio.h>
#include<conio.h>
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)				// A function to implement bubble sort
{
	for (int i = 0; i < n - 1; i++)
	{
		int flag = 0;

		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				flag = 1;			// if swapping happens update flag to 1
			}
		}
// if value of flag is zero after all the iterations of inner loop then break out
		if (flag == 0)
		{
			break;
		}
	}
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = { 8, 6, 21, 19, 17, 21, 23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	_getch();
}