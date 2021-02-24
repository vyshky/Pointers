#include"Header.h"
void FillRand(int arr[], int& even_size, int& odd_size, const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100 + 1;
		if (arr[i] % 2 == 0)
		{
			even_size++;
		} 
		else
		{
			odd_size++;
		}
	}
}