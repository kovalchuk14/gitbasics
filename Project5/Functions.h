#pragma once

#include <iostream>
using namespace std;

#define DELIMITER "\n-----------------------------------------------------\n"

const int ROWS = 4;
const int COLS = 5;



void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(float arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(float arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
float Sum(float arr[], const int n);
double Sum(double arr[], const int n);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
float Avg(float arr[], const int n);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
float Avg(float arr[ROWS][COLS], const int ROWS, const int COLS);

int Min(int arr[], const int n);
double Min(double arr[], const int n);
float Min(float arr[], const int n);
float Min(float arr[ROWS][COLS], const int ROWS, const int COLS);
double Min(double arr[ROWS][COLS], const int ROWS, const int COLS);
int Min(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Max(int arr[], const int n);
float Max(float arr[], const int n);
double Max(double arr[], const int n);
float Max(float arr[ROWS][COLS], const int ROWS, const int COLS);
double Max(double arr[ROWS][COLS], const int ROWS, const int COLS);
int Max(int arr[ROWS][COLS], const int ROWS, const int COLS);