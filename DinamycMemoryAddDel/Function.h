#pragma once
#include <iostream>
using namespace std;

template <typename T>T* push_back(T arr[], int& n, T  value);
template <typename T>T* push_front(T* arr, int& n, T  value);
template <typename T>T* insert(T* arr, int& n, T  value, int index);
template <typename T>T* pop_back(T arr[], int& n);
template <typename T>T* pop_front(T arr[], int& n);
template <typename T>T* erase(T arr[], int& n, int index);
template <typename T>T** push_row_back(T** arr, int& rows, int& cols);
template <typename T>T** push_row_front(T** arr, int& rows, int& cols);
template <typename T>T** insert_row(T** arr, int& rows, int& cols, int index);
template <typename T>T** pop_row_back(T** arr, int& rows, int& cols);
template <typename T>T** pop_row_front(T** arr, int& rows, int& cols);
template <typename T>T** erase_row(T** arr, int& rows, int& cols, int index);
template <typename T>void push_col_back(T** arr, int& rows, int& cols);
template <typename T>void push_col_front(T** arr, int& rows, int& cols);
template <typename T>void insert_col(T** arr, int& rows, int& cols, int index);
template <typename T>void pop_col_back(T** arr, int& rows, int& cols);
template <typename T>void pop_col_front(T** arr, int& rows, int& cols);
template <typename T>void erase_col(T** arr, int& rows, int& cols, int index);

template <typename T>void clear(T** arr, int rows);
template <typename T>T** allocate(const int rows, const int cols);
template <typename T>void print(T arr[], const int n);
template <typename T>void print(T** arr, int rows, int cols);
template <typename T>void fill_rand(T** arr, int rows, int cols);