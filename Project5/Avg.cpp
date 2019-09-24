#include "Functions.h"
double Avg(int arr[], const int n)
{
	double sum = Sum(arr, n);
	sum /= n;
	return sum;
}
float Avg(float arr[], const int n)
{
	double sum = Sum(arr, n);
	sum /= n;
	return sum;
}
double Avg(double arr[], const int n)
{
	double sum = Sum(arr, n);
	sum /= n;
	return sum;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg = Sum(arr, ROWS, COLS);
	avg /= ROWS * COLS;
	return avg;
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg = Sum(arr, ROWS, COLS);
	avg /= ROWS * COLS;

	return avg;
}
float Avg(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float avg = Sum(arr, ROWS, COLS);
	avg /= ROWS * COLS;
	return avg;
}
