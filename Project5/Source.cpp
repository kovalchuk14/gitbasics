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
	cout << DELIMITER;
	double orr[ROWS][COLS];
	FillRand(orr, ROWS, COLS);
	Print(orr, ROWS, COLS);
	cout << DELIMITER;
	Sort(orr, ROWS, COLS);
	Print(orr, ROWS, COLS);
	cout << "����� ������� " << Sum(orr, ROWS, COLS) << endl;
	cout << "������� �������������� ������� " << Avg(orr, ROWS, COLS) << endl;
	cout << "����������� �������� ������� " << Min(orr, ROWS, COLS) << endl;
	cout << "������������ �������� ������� " << Max(orr, ROWS, COLS) << endl;
	cout << DELIMITER;
	float err[ROWS][COLS];
	FillRand(err, ROWS, COLS);
	Print(err, ROWS, COLS);
	cout << DELIMITER;
	Sort(err, ROWS, COLS);
	Print(err, ROWS, COLS);
	cout << "����� ������� " << Sum(err, ROWS, COLS) << endl;
	cout << "������� �������������� ������� " << Avg(err, ROWS, COLS) << endl;
	cout << "����������� �������� ������� " << Min(err, ROWS, COLS) << endl;
	cout << "������������ �������� ������� " << Max(err, ROWS, COLS) << endl;
	cout << DELIMITER;

}