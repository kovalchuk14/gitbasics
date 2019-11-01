#include <iostream>
using namespace std;

void print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, ""); 
	int n;
	cout << "¬ведите размер массива "; cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << (arr[i] = rand() % 100) << "\t";
	}
	cout << endl;

	int value;
	cout << "¬ведие добавл€емое значение: "; cin >> value;
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;

	arr[n] = value;
	n++;
	print(arr, n);

	delete[] arr;
}
void print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<< "\t";
	}
	cout << endl;
}
