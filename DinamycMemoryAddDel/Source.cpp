#include <iostream>
using namespace std;

int* push_back(int arr[], int& n, int  value);
int* push_front(int* arr, int& n, int  value);
int* insert(int* arr, int& n, int  value, int index);
int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);
int* erase(int arr[], int& n, int index);
int** push_row_back(int** arr, int& rows, int& cols);
int** push_row_front(int** arr, int& rows, int& cols);
int** insert_row(int** arr, int& rows, int& cols, int index);
int** pop_row_back(int** arr, int& rows, int& cols);
int** pop_row_front(int** arr, int& rows, int& cols);
int** erase_row(int** arr, int& rows, int& cols, int index);
void push_col_back(int** arr, int& rows, int& cols);
void push_col_front(int** arr, int& rows, int& cols);
void insert_col(int** arr, int& rows, int& cols, int index);
void pop_col_back(int** arr, int& rows, int& cols);
void pop_col_front(int** arr, int& rows, int& cols);
void erase_col(int** arr, int& rows, int& cols, int index);

void clear(int** arr, int rows);
int** allocate(const int rows, const int cols);
void print(int arr[], const int n);
void print(int** arr, int rows, int cols);
void fill_rand(int** arr, int rows, int cols);

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
	//int value,index;
	//cout << "¬ведие добавл€емое значение: "; cin >> value;
	//cout << 
	//"¬ведие куда добавить: "; cin >> index;
	//push_back(arr, n, value);
	//push_front(arr, n, value);
	//insert(arr, n, value,index);
	//pop_back(arr, n);
	//pop_front(arr, n);
	//erase(arr, n, index);
	int rows;
	int	cols;
	int index;
	cout << "¬ведите количество строк: "; cin >> rows;
	cout << "¬ведите количество столбов: "; cin >> cols;
	int** brr=allocate(rows, cols);
	fill_rand(brr,rows, cols);
	print(brr, rows, cols);
	//cout << "¬ведите куда встаить или удалить "; cin >> index;
	//brr = push_row_back(brr, rows, cols);
	//brr = push_row_front(brr, rows, cols);
	//brr = insert_row(brr, rows, cols,index);
	//brr = pop_row_back(brr, rows, cols);
	//brr = pop_row_front(brr, rows, cols);
	//brr = erase_row(brr, rows, cols, index);
	//push_col_back(brr, rows, cols);
	//push_col_front(brr, rows, cols);
	//insert_col(brr, rows, cols,index);
	//pop_col_back(brr, rows, cols);]
	//pop_col_front(brr, rows, cols);
	//erase_col(brr, rows, cols,index);
	print(brr, rows, cols);
	clear(brr, rows);
}
int* push_back(int arr[], int& n, int  value)
{
	int* buffer = new int[n + 1]{};
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
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++)	buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	print(arr, n);
	delete[] arr;
	return buffer;
}
int* insert(int* arr, int& n, int value, int index)
{
	int* buffer = new int[++n]{};
	for (int i = 0; i < index; i++) buffer[i] = arr[i];
	for (int i = index; i < n; i++) buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[index] = value;
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
	for (int i = 0; i < n; i++)	buffer[i] = arr[i + 1];
	delete[] arr;
	arr = buffer;
	print(arr, n);
	buffer = nullptr;
	delete[] arr;
	return buffer;
}
int* erase(int arr[], int& n, int index)
{
	int* buffer = new int[--n]{};
	for (int i = 0; i < index; i++) buffer[i] = arr[i];
	for (int i = index; i < n; i++) buffer[i] = arr[i + 1];
	delete[] arr;
	arr = buffer;
	print(arr, n);
	buffer = nullptr;
	delete[] arr;
	return buffer;
}
int** push_row_back(int** arr, int& rows, int& cols)
{
	int** buffer = new int*[rows + 1]{};
	for (int i = 0; i < rows; i++)	buffer[i] = arr[i];

	delete[] arr;
	arr = buffer;
	arr[rows] = new int [cols] {};
	rows++;
	return arr;
}
int** push_row_front(int** arr, int& rows, int& cols)
{
	int** buffer = new int*[rows + 1]{};
	for (int i = 0; i < rows; i++)	buffer[i + 1] = arr[i];

	delete[] arr;
	arr = buffer;
	arr[0] = new int [cols] {};
	rows++;
	return arr;
}
int** insert_row(int** arr, int& rows, int& cols, int index)
{
	int** buffer = new int*[rows + 1]{};
	for (int i = 0; i < index; i++)	buffer[i] = arr[i];
	for (int i = index; i < rows; i++)	buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[index] = new int [cols] {};
	rows++;
	return arr;
}
int** pop_row_back(int** arr, int& rows, int& cols)
{
	int** buffer = new int*[rows - 1]{};
	for (int i = 0; i < rows; i++)	buffer[i] = arr[i];

	delete[] arr;
	arr = buffer;
	rows--;
	return arr;
}
int** pop_row_front(int** arr, int& rows, int& cols)
{
	int** buffer = new int*[rows - 1]{};
	for (int i = 1; i <= rows; i++)	buffer[i - 1] = arr[i];

	delete[] arr;
	arr = buffer;
	rows--;
	return arr;
}
int** erase_row(int** arr, int& rows, int& cols, int index)
{
	int** buffer = new int*[rows - 1]{};
	for (int i = 0; i < index; i++)	buffer[i] = arr[i];
	for (int i = index + 1; i <= rows; i++)	buffer[i - 1] = arr[i];
	delete[] arr;
	arr = buffer;
	rows--;
	return arr;
}
void push_col_back(int** arr, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		int*buffer = new int[cols + 1]{};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;

}
void push_col_front(int** arr, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		int*buffer = new int[cols + 1]{};
		for (int j = 0; j < cols; j++)buffer[j+1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}
void insert_col(int** arr, int& rows, int& cols, int index)
{
	for (int i = 0; i < rows; i++)
	{
		int*buffer = new int[cols + 1]{};
		for (int j = 0; j < index; j++)buffer[j] = arr[i][j];
		for (int j = index; j < cols; j++)buffer[j + 1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}
void pop_col_back(int** arr, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		int*buffer = new int[cols - 1]{};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}
void pop_col_front(int** arr, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		int*buffer = new int[cols - 1]{};
		for (int j = 1; j <= cols; j++)buffer[j-1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}
void erase_col(int** arr, int& rows, int& cols, int index)
{
	for (int i = 0; i < rows; i++)
	{
		int*buffer = new int[cols - 1]{};
		for (int j = 0; j < index; j++)buffer[j] = arr[i][j];
		for (int j = index; j < cols; j++)buffer[j] = arr[i][j+1];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}
int** allocate(const int rows, const int cols)
{
	int **brr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		brr[i] = new int [cols] {};
	}
	return brr;
}
void clear(int** arr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}
void fill_rand(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void print(int** arr, int rows, int cols)
{
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
