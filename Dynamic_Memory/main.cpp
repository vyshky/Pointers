#include"Header.h"

void main()
{
	setlocale(LC_ALL, "rus");
	const int N = 10;
	int even_count = 0, odd_count = 0;

	int arr[N];

	FillRand(arr, even_count, odd_count, N);	Print(arr, N);

	int* arr_even = new int [even_count] {};
	int* arr_odd = new int[odd_count] {};

	SortEven(arr, arr_even, N);	SortOdd(arr, arr_odd, N);

	cout << "------------------EVEN------------------" << endl;
	Print(arr_even, even_count);
	cout << "------------------ODD------------------" << endl;
	Print(arr_odd, odd_count);

}

