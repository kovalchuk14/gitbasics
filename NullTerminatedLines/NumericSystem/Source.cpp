#include <iostream>
#include <Windows.h>
using namespace std;

char* dec_to_bin(int dec);
int bin_to_dec(char* binary);
int hex_to_dec(char* binary);
bool IsBin(char binary[]);
bool IsHex(char binary[]);

void main()
{
	setlocale(LC_ALL, "");
	int dec;
	const int n = 200;
	char str[n];
	cin >> str;
	//cout << "Введите десятичное число: "; cin >> dec;
	/*
	char* binary = dec_to_bin(dec);
	cout<< binary <<endl;
	delete[] binary;*/
	//int bin = bin_to_dec(str);
	int bin = hex_to_dec(str);
	cout << bin;
}
char* dec_to_bin(int dec)
{
	int n = 32;
	char* binary = new char[n] {};
	for (int i = 0; dec; i++, dec /= 2)binary[i] = dec % 2 + 48;
	//for (n--; n >= 0; n--)
	//{
	//	cout << binary[n];
	//	if (n % 8 == 0)cout << " ";
	//	if (n % 4 == 0)cout << " ";
	//}
	//cout << endl;
	n = strlen(binary);
	for (int i = 0; i < n / 2; i++)swap(binary[i], binary[n - 1 - i]);
	return binary;
}
bool IsBin(char binary[])
{
	for (int i = 0; i < strlen(binary); i++)if (binary[i] != '1'&&binary[i] != '0') return false;
	return true;
}
int bin_to_dec(char* binary)
{
	if (IsBin(binary))
	{
		int num = 0;
		int pow = 1;
		for (int i = strlen(binary) - 1; i >= 0; i--, pow *= 2)
		{
			if (binary[i] == '1')num += pow;
		}
		return num;
	}
}
bool IsHex(char binary[])
{
	for (int i = 0; i < strlen(binary); i++)if (!((binary[i] >= '0'&&binary[i] <= '9') || (binary[i] >= 'a'&&binary[i] <= 'f') || (binary[i] >= 'A'&&binary[i] <= 'F'))) return false;
	return true;
}
int hex_to_dec(char* binary)
{
	if (IsHex(binary))
	{
		int num = 0;
		int pow = 1;
		for (int i = strlen(binary) - 1; i >= 0; i--, pow *= 16)
		{
			if (binary[i] >= '0'&&binary[i] <= '9')
				num += (binary[i] - 48)*pow;
			if (binary[i] >= 'a'&&binary[i] <= 'f')
				num += (binary[i] - 87)*pow;
			if (binary[i] >= 'A'&&binary[i] <= 'F')
				num += (binary[i] - 55)*pow;
		}
		return num;
	}
}