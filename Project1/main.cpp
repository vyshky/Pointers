#include<iostream>

using namespace std;

//#define POINTERS_BASICS
#define POINTERS_ARRAYS

void main()
{
	setlocale(LC_ALL, "rus");
#ifdef POINTER_BASICS

	setlocale(LC_ALL, "Russian");

	int a = 2;
	int* pa = &a;
	cout << a << endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;


	int* pb;
	int b = 3;
	pb = &b;

	cout << pb << endl;
	cout << *pb << endl;
#endif // POINTER_BASICS


	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << *(arr+1) << endl;
	cout << arr[1]<< endl;


	//for (int i = 0; i < n; i++)
	//{
	//	//Доступ к элементам массива через арифметику указателей и операторов разыменновывания
	//	cout << arr + i << '\t';
	//}
	//cout << endl;
	//for (int i = 0; i < n; i++)
	//{
	//	//Доступ к элементам массива через оператор индексирования []
	//	cout << arr[i] << '\t'; 
	//}
	//cout << endl;
}