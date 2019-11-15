#include "Function.h"
#include "Memory.cpp"
#include "Arrays2D.cpp"
#include "BasseFunctions.cpp"
#include "SimpleArrays.cpp"



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

