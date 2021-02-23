#include"Header.h"
void Sort(int arr[], int arr2[], const int n, bool b)
{
	for (int i = 0, count = 0; i < n; i++)
	{

		if (arr[i] % 2 == 0 && b == true)
		{
			arr2[count] = arr[i];
			count++;
		}
		else if (arr[i] % 2 != 0 && b == false)
		{
			arr2[count] = arr[i];
			count++;
		}
	}
}

