#include "declaration.h"
template<typename T>
double Avg(T arr[], const int n)
{
	double sum = Sum(arr, n);
	sum /= n;
	return sum;
}
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg = Sum(arr, ROWS, COLS);
	avg /= ROWS * COLS;
	return avg;
}
