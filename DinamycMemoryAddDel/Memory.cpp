#include "Functions.h"
template <typename T>T** allocate(const int rows, const int cols)
{
	T **brr = new T*[rows];
	for (int i = 0; i < rows; i++)
	{
		brr[i] = new T[cols]{};
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