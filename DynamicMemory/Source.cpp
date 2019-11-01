#include <iostream>
#include<ctime>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int a = 0;
	int k = 0;
	/*int n;
	cout << "¬ведите размер массива "; cin >> n;

	double*arr = new double[n] {};
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 2;
	}
	delete[] arr;*/
	srand(time(NULL));

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << "\t";
		if (arr[i] % 2 == 1)
		{
			k++;
		}
		else
		{
			a++;
		}
	}
	cout << endl;
	int*odd_value = new int[k];
	int*even_value = new int[a];
	for (int i = 0, q = 0,w=0; i < n; i++)
	{
		if (arr[i] % 2 == 1)
		{
			odd_value[q] = arr[i];
			q++;
		}
		if (arr[i] % 2 == 0)
		{
			even_value[w] = arr[i];
			w++;
		}
	}
	for (int i = 0; i < a; i++)
	{
		cout << even_value[i] << "\t";
	cout << endl;
	}

	for (int i = 0; i < k; i++)
	{
		cout << odd_value[i] << "\t";
	}
}