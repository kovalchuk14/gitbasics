#include "Functions.h"

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
	cout << "Сумма массива " << Sum(arr, n) << endl;
	cout << "Среднее арефметическое массива " << Avg(arr, n) << endl;
	cout << "Минимальное значение массива " << Min(arr, n) << endl;
	cout << "Максимальное значение массива " << Max(arr, n) << endl;
	cout << DELIMITER;
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "Сумма массива " << Sum(brr, n) << endl;
	cout << "Среднее арефметическое массива " << Avg(brr, n) << endl;
	cout << "Минимальное значение массива " << Min(brr, n) << endl;
	cout << "Максимальное значение массива " << Max(brr, n) << endl;
	cout << DELIMITER;
	float crr[n];
	FillRand(crr, n);
	Print(crr, n);
	cout << "Сумма массива " << Sum(crr, n) << endl;
	cout << "Среднее арефметическое массива " << Avg(crr, n) << endl;
	cout << "Минимальное значение массива " << Min(crr, n) << endl;
	cout << "Максимальное значение массива " << Max(crr, n) << endl;
	cout << DELIMITER;
	int drr[ROWS][COLS];
	FillRand(drr, ROWS, COLS);
	Print(drr, ROWS, COLS);
	cout << DELIMITER;
	Sort(drr, ROWS, COLS);
	Print(drr, ROWS, COLS);
	cout << "Сумма массива " << Sum(drr, ROWS, COLS) << endl;
	cout << "Среднее арефметическое массива " << Avg(drr, ROWS, COLS) << endl;
	cout << "Минимальное значение массива " << Min(drr, ROWS, COLS) << endl;
	cout << "Максимальное значение массива " << Max(drr, ROWS, COLS) << endl;
	cout << DELIMITER;
	double orr[ROWS][COLS];
	FillRand(orr, ROWS, COLS);
	Print(orr, ROWS, COLS);
	cout << DELIMITER;
	Sort(orr, ROWS, COLS);
	Print(orr, ROWS, COLS);
	cout << "Сумма массива " << Sum(orr, ROWS, COLS) << endl;
	cout << "Среднее арефметическое массива " << Avg(orr, ROWS, COLS) << endl;
	cout << "Минимальное значение массива " << Min(orr, ROWS, COLS) << endl;
	cout << "Максимальное значение массива " << Max(orr, ROWS, COLS) << endl;
	cout << DELIMITER;
	float err[ROWS][COLS];
	FillRand(err, ROWS, COLS);
	Print(err, ROWS, COLS);
	cout << DELIMITER;
	Sort(err, ROWS, COLS);
	Print(err, ROWS, COLS);
	cout << "Сумма массива " << Sum(err, ROWS, COLS) << endl;
	cout << "Среднее арефметическое массива " << Avg(err, ROWS, COLS) << endl;
	cout << "Минимальное значение массива " << Min(err, ROWS, COLS) << endl;
	cout << "Максимальное значение массива " << Max(err, ROWS, COLS) << endl;
	cout << DELIMITER;

}