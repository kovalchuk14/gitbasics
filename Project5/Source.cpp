#include <iostream>
using namespace std;

#define DELIMITER "\n-----------------------------------------------------\n"

const int ROWS = 4;
const int COLS = 5;

template<typename T>
void FillRand(T arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Print(T arr[], const int n);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Sort(T arr[], const int n);
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Sum(T arr[], const int n);
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
double Avg(T arr[], const int n);
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Min(T arr[], const int n);
template<typename T>
T Min(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Max(T arr[], const int n);
template<typename T>
T Max(T arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int q;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	cout << DELIMITER;
	Print(arr, n);
	cout << "����� ������� " << Sum(arr, n) << endl;
	cout << "������� �������������� ������� " << Avg(arr, n) << endl;
	cout << "����������� �������� ������� " << Min(arr, n) << endl;
	cout << "������������ �������� ������� " << Max(arr, n) << endl;
	cout << DELIMITER;
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "����� ������� " << Sum(brr, n) << endl;
	cout << "������� �������������� ������� " << Avg(brr, n) << endl;
	cout << "����������� �������� ������� " << Min(brr, n) << endl;
	cout << "������������ �������� ������� " << Max(brr, n) << endl;
	cout << DELIMITER;
	float crr[n];
	FillRand(crr, n);
	Print(crr, n);
	cout << "����� ������� " << Sum(crr, n) << endl;
	cout << "������� �������������� ������� " << Avg(crr, n) << endl;
	cout << "����������� �������� ������� " << Min(crr, n) << endl;
	cout << "������������ �������� ������� " << Max(crr, n) << endl;
	cout << DELIMITER;
	int drr[ROWS][COLS];
	FillRand(drr, ROWS, COLS);
	Print(drr, ROWS, COLS);
	cout << DELIMITER;
	Sort(drr, ROWS, COLS);
	Print(drr, ROWS, COLS);
	cout << "����� ������� " << Sum(drr, ROWS, COLS) << endl;
	cout << "������� �������������� ������� " << Avg(drr, ROWS, COLS) << endl;
	cout << "����������� �������� ������� " << Min(drr, ROWS, COLS) << endl;
	cout << "������������ �������� ������� " << Max(drr, ROWS, COLS) << endl;
}
template<typename T>
void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}

}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}

}
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}

}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template<typename T>
void Sort(T arr[], const int n)
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
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int buffer;
	int kol = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l=0 ;
				//(k == i)?l = j + 1:l = 0;
				//l= (k == i)?j+1:0;
				for (int l = k == i? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j]>arr[k][l])
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
	cout << "������ ������������ �� " << kol << " ��������" << endl;

}

template<typename T>
T Sum(T arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];

	}
	return sum;
}
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{

			sum += arr[i][j];
		}

	}
	return sum;
}

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

template<typename T>
T Min(T arr[], const int n)
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
template<typename T>
T Min(T arr[ROWS][COLS], const int ROWS, const int COLS)
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

template<typename T>
T Max(T arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}

	}
	return max;
}
template<typename T>
T Max(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}


	}
	return max;
}
