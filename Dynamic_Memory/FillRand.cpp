#include"Header.h"
void FillRand(int arr[], int& even, int& odd, const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		if (arr[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
}