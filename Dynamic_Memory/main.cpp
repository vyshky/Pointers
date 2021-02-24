#include"Header.h"

void main()
{
	setlocale(LC_ALL, "rus");
	const int N = 10;	
	int even_size = 0, odd_size = 0;

	int arr[N];

	FillRand(arr, even_size, odd_size, N);	Print(arr, N);

	int* arr_even = new int [even_size] {};
	int* arr_odd = new int[odd_size] {};


	Sort(arr, arr_even, even_size, N, true); /// 1 , true (Если TRUE, то функция запишет в массив все четные элементы)
	Sort(arr, arr_odd, odd_size, N, false); /// 0 , false (False запишет все нечетные элементы)

	cout << "------------------EVEN------------------" << endl;
	Print(arr_even, even_size);
	cout << "------------------ODD------------------" << endl;
	Print(arr_odd, odd_size);

}

