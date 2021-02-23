#include"Header.h"

void main()
{
	setlocale(LC_ALL, "rus");
	const int N = 10;
	bool b = 0;
	int even_count = 0, odd_count = 0;

	int arr[N];

	FillRand(arr, even_count, odd_count, N);	Print(arr, N);

	int* arr_even = new int [even_count] {};
	int* arr_odd = new int[odd_count] {};


	Sort(arr, arr_even, N, true); /// 1 , true (Если TRUE, то функция запишет в массив все четные элементы)
	Sort(arr, arr_odd, N, false); /// 0 , false (False запишет все нечетные элементы)

	cout << "------------------EVEN------------------" << endl;
	Print(arr_even, even_count);
	cout << "------------------ODD------------------" << endl;
	Print(arr_odd, odd_count);

}

