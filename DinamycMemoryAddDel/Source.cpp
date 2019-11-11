#include <iostream>
using namespace std;

int* push_back(int arr[], int& n, int  value);
int* push_front(int* arr, int& n, int  value);
int* insert(int* arr, int& n, int  value, int kol);
int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);
int* erase(int arr[], int& n,int kol);
int** push_row_back(int** arr, int& ROWS, int& COLS);




void print(int arr[], const int n);
void print(int** arr, int ROWS, int COLS);

void main()
{
	setlocale(LC_ALL, ""); 
	//int n;
	//cout << "¬ведите размер массива "; cin >> n;
	//int *arr = new int[n];
	//for (int i = 0; i < n; i++)
	//{
	//	cout << (arr[i] = rand() % 100) << "\t";
	//}
	//cout << endl;
	//int value,kol;
	//cout << "¬ведие добавл€емое значение: "; cin >> value;
	//cout << "¬ведие куда добавить: "; cin >> kol;
	//push_back(arr, n, value);
	//push_front(arr, n, value);
	//insert(arr, n, value,kol);
	//pop_back(arr, n);
	//pop_front(arr, n);
	//erase(arr, n, kol);
	int ROWS;
	int	COLS;
	cin >> ROWS;
	cin >> COLS;
	int **brr = new int*[ROWS];
	for (int i = 0; i < ROWS; i++)
	{
		brr[i] = new int [COLS] {};
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout<<(brr[i][j] = rand() % 100)<<"\t";
		}
		cout << endl;
	}
	push_row_back(brr, ROWS, COLS);
	print(brr, ROWS, COLS);
}
int* push_back(int arr[], int& n, int  value)
{
	int* buffer = new int[n+1]{};
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
	print(arr, n);
	delete[] arr;
	return buffer;
}
int* push_front(int* arr, int& n, int  value)
{
	int* buffer = new int[n+1]{};
	for (int i = 0; i < n; i++)	buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	print(arr, n);
	delete[] arr;
	return buffer;
}
int* insert(int* arr, int& n, int value, int kol)
{
	int* buffer = new int[++n]{};
	for (int i = 0; i < kol; i++) buffer[i] = arr[i];
	for (int i = kol; i < n; i++) buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[kol] = value;
	print(arr, n);
	delete[] arr;
	return buffer;
}
int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n]{};
	for (int i = 0; i < n; i++)	buffer[i] = arr[i];
	delete[] arr;
	arr = buffer;
	print(arr, n);
	buffer = nullptr;
	delete[] arr;
	return buffer;
}
int* pop_front(int arr[], int& n)
{
	int* buffer = new int[--n]{};
	for (int i = 0; i < n; i++)	buffer[i] = arr[i+1];
	delete[] arr;
	arr = buffer;
	print(arr, n);
	buffer = nullptr;
	delete[] arr;
	return buffer;
}
int* erase(int arr[], int& n, int kol)
{
	int* buffer = new int[--n]{};
	for (int i = 0; i < kol; i++) buffer[i] = arr[i];
	for (int i = kol; i < n; i++) buffer[i] = arr[i+1];
	delete[] arr;
	arr = buffer;
	print(arr, n);
	buffer = nullptr;
	delete[] arr;
	return buffer;
}
int** push_row_back(int** arr, int& ROWS, int& COLS)
{
	int** buffer = new int*[ROWS + 1]{};
	for (int i = 0; i < ROWS; i++)
	{
		buffer[i] = new int[COLS] {};
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (i == ROWS - 1) break;
			buffer[i][j] = arr[i+1][j]; //копируем элементы со здвигом +1(i).
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		delete[] arr[i];
	}
	ROWS++;
	delete[] arr;
	arr = buffer;
	arr[ROWS] = new int [COLS] {}; //€ думал что нужно вставить в (0) строку
	ROWS++;
	return arr;
}
void print(int** arr, int ROWS, int COLS)
{
	cout << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j]<< "\t";
		}
		cout << endl;
	}
}
void print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<< "\t";
	}
	cout << endl;
}
