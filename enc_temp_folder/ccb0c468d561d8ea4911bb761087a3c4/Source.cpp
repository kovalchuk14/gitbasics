#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер массива "; cin >> n;

	double*arr = new double[n] {};
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 2;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}

	delete[] arr;
}