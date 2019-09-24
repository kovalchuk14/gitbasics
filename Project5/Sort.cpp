#include "Functions.h"
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int buffer;
	int kol = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l = 0;
				//(k == i)?l = j + 1:l = 0;
				//l= (k == i)?j+1:0;
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] > arr[k][l])
					{
						buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					kol++;
				}
			}
		}
	}
	cout << "Массив отсортерован за " << kol << " итерацый" << endl;

}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int buffer;
	int kol = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l = 0;
				//(k == i)?l = j + 1:l = 0;
				//l= (k == i)?j+1:0;
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] > arr[k][l])
					{
						buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					kol++;
				}
			}
		}
	}
	cout << "Массив отсортерован за " << kol << " итерацый" << endl;

}
void Sort(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int buffer;
	int kol = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l = 0;
				//(k == i)?l = j + 1:l = 0;
				//l= (k == i)?j+1:0;
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] > arr[k][l])
					{
						buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					kol++;
				}
			}
		}
	}
	cout << "Массив отсортерован за " << kol << " итерацый" << endl;

}

