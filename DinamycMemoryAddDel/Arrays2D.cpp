#include "Function.h"

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
	arr[0] = new T[cols]{};
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
	arr[index] = new T[cols]{};
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
		for (int j = 0; j < cols; j++)buffer[j + 1] = arr[i][j];
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
		for (int j = 1; j <= cols; j++)buffer[j - 1] = arr[i][j];
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
		for (int j = index; j < cols; j++)buffer[j] = arr[i][j + 1];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}

