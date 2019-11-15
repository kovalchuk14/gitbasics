#include <iostream>
using namespace std;

template <typename T>T* push_back(T arr[], int& n, T  value);
template <typename T>T* push_front(T* arr, int& n, T  value);
template <typename T>T* insert(T* arr, int& n, T  value, int index);
template <typename T>T* pop_back(T arr[], int& n);
template <typename T>T* pop_front(T arr[], int& n);
template <typename T>T* erase(T arr[], int& n, int index);
template <typename T>T** push_row_back(T** arr, int& rows, int& cols);
template <typename T>T** push_row_front(T** arr, int& rows, int& cols);
template <typename T>T** insert_row(T** arr, int& rows, int& cols, int index);
template <typename T>T** pop_row_back(T** arr, int& rows, int& cols);
template <typename T>T** pop_row_front(T** arr, int& rows, int& cols);
template <typename T>T** erase_row(T** arr, int& rows, int& cols, int index);
template <typename T>void push_col_back(T** arr, int& rows, int& cols);
template <typename T>void push_col_front(T** arr, int& rows, int& cols);
template <typename T>void insert_col(T** arr, int& rows, int& cols, int index);
template <typename T>void pop_col_back(T** arr, int& rows, int& cols);
template <typename T>void pop_col_front(T** arr, int& rows, int& cols);
template <typename T>void erase_col(T** arr, int& rows, int& cols, int index);

template <typename T>void clear(T** arr, int rows);
template <typename T>T** allocate(const int rows, const int cols);
template <typename T>void print(T arr[], const int n);
template <typename T>void print(T** arr, int rows, int cols);
template <typename T>void fill_rand(T** arr, int rows, int cols);

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
	int** brr=allocate<int>(rows, cols);
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
	//pop_col_back(brr, rows, cols);
	//pop_col_front(brr, rows, cols);
	//erase_col(brr, rows, cols,index);
	print(brr, rows, cols);
	clear(brr, rows);
}
template <typename T>T* push_back(T arr[], int& n, T  value)
{
	T* buffer = new T[n + 1]{};
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
	print(arr, n);
	delete[] arr;
	return buffer;
}
template <typename T>T* push_front(T* arr, int& n, T  value)
{
	T* buffer = new T[n + 1]{};
	for (int i = 0; i < n; i++)	buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	print(arr, n);
	delete[] arr;
	return buffer;
}
template <typename T>T* insert(T* arr, int& n, T  value, int index)
{
	T* buffer = new T[++n]{};
	for (int i = 0; i < index; i++) buffer[i] = arr[i];
	for (int i = index; i < n; i++) buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[index] = value;
	print(arr, n);
	delete[] arr;
	return buffer;
}
template <typename T>T* pop_back(T arr[], int& n)
{
	T* buffer = new T[--n]{};
	for (int i = 0; i < n; i++)	buffer[i] = arr[i];
	delete[] arr;
	arr = buffer;
	print(arr, n);
	buffer = nullptr;
	delete[] arr;
	return buffer;
}
template <typename T>T* pop_front(T arr[], int& n)
{
	T* buffer = new T[--n]{};
	for (int i = 0; i < n; i++)	buffer[i] = arr[i + 1];
	delete[] arr;
	arr = buffer;
	print(arr, n);
	buffer = nullptr;
	delete[] arr;
	return buffer;
}
template <typename T>T* erase(T arr[], int& n, int index)
{
	T* buffer = new T[--n]{};
	for (int i = 0; i < index; i++) buffer[i] = arr[i];
	for (int i = index; i < n; i++) buffer[i] = arr[i + 1];
	delete[] arr;
	arr = buffer;
	print(arr, n);
	buffer = nullptr;
	delete[] arr;
	return buffer;
}
template <typename T>T** push_row_back(T** arr, int& rows, int& cols)
{
	T** buffer = new T*[rows + 1]{};
	for (int i = 0; i < rows; i++)	buffer[i] = arr[i];

	delete[] arr;
	arr = buffer;
	arr[rows] = new int [cols] {};
	rows++;
	return arr;
}
template <typename T>T** push_row_front(T** arr, int& rows, int& cols)
{
	T** buffer = new T*[rows + 1]{};
	for (int i = 0; i < rows; i++)	buffer[i + 1] = arr[i];

	delete[] arr;
	arr = buffer;
	arr[0] = new T [cols] {};
	rows++;
	return arr;
}
template <typename T>T** insert_row(T** arr, int& rows, int& cols, int index)
{
	T** buffer = new T*[rows + 1]{};
	for (int i = 0; i < index; i++)	buffer[i] = arr[i];
	for (int i = index; i < rows; i++)	buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[index] = new T [cols] {};
	rows++;
	return arr;
}
template <typename T>T** pop_row_back(T** arr, int& rows, int& cols)
{
	T** buffer = new T*[--rows]{};
	for (int i = 0; i < rows; i++)	buffer[i] = arr[i];

	delete[] arr;
	arr = buffer;
	return arr;
}
template <typename T>T** pop_row_front(T** arr, int& rows, int& cols)
{
	T** buffer = new T*[rows - 1]{};
	for (int i = 1; i <= rows; i++)	buffer[i - 1] = arr[i];

	delete[] arr;
	arr = buffer;
	rows--;
	return arr;
}
template <typename T>T** erase_row(T** arr, int& rows, int& cols, int index)
{
	T** buffer = new T*[rows - 1]{};
	for (int i = 0; i < index; i++)	buffer[i] = arr[i];
	for (int i = index + 1; i <= rows; i++)	buffer[i - 1] = arr[i];
	delete[] arr;
	arr = buffer;
	rows--;
	return arr;
}
template <typename T>void push_col_back(T** arr, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T*buffer = new T[cols + 1]{};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;

}
template <typename T>void push_col_front(T** arr, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T*buffer = new T[cols + 1]{};
		for (int j = 0; j < cols; j++)buffer[j+1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}
template <typename T>void insert_col(T** arr, int& rows, int& cols, int index)
{
	for (int i = 0; i < rows; i++)
	{
		T*buffer = new T[cols + 1]{};
		for (int j = 0; j < index; j++)buffer[j] = arr[i][j];
		for (int j = index; j < cols; j++)buffer[j + 1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}
template <typename T>void pop_col_back(T** arr, int& rows, int& cols)
{
	cols--;
	for (int i = 0; i < rows; i++)
	{
		T*buffer = new T[cols]{};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
}
template <typename T>void pop_col_front(T** arr, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T*buffer = new T[cols - 1]{};
		for (int j = 1; j <= cols; j++)buffer[j-1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}
template <typename T>void erase_col(T** arr, int& rows, int& cols, int index)
{
	for (int i = 0; i < rows; i++)
	{
		T*buffer = new T[cols - 1]{};
		for (int j = 0; j < index; j++)buffer[j] = arr[i][j];
		for (int j = index; j < cols; j++)buffer[j] = arr[i][j+1];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}
template <typename T>T** allocate(const int rows, const int cols)
{
	T **brr = new T*[rows];
	for (int i = 0; i < rows; i++)
	{
		brr[i] = new T [cols] {};
	}
	return brr;
}
template <typename T>void clear(T** arr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}
template <typename T>void fill_rand(T** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
template <typename T>void print(T** arr, int rows, int cols)
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
template <typename T>void print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
