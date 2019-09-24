#include "Functions.h"

int Min(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}

	}
	return min;
}
float Min(float arr[], const int n)
{

	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}

	}
	return min;
}
double Min(double arr[], const int n)
{

	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}

	}
	return min;
}
int Min(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{

			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
		}

	}
	return min;
}
double Min(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)

	{
		for (int j = 0; j < COLS; j++)
		{

			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
		}

	}
	return min;
}
float Min(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{

			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
		}

	}
	return min;
}
