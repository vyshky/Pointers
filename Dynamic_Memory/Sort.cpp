#include"Header.h"
void SortEven(int arr[], int arr2[], const int n)
{
	for (int i = 0, count = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr2[count] = arr[i];
			count++;
		}

	}
}

void SortOdd(int arr[], int arr2[], const int n)
{
	for (int i = 0, count = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr2[count] = arr[i];
			count++;
		}
	}
}
