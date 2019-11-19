#include <iostream>
#include <Windows.h>
using namespace std;

void input_line(char str[], const int n);
int StrLen(char str[]);

void main()
{
	setlocale(LC_ALL, "");
	/*char str[] = { 'h','e','l','l','o','\0' };
	char str[] = "hello";
	cout << str << endl;
	cout << sizeof("Hello") << endl;*/
	const int n = 20;
	char str[n];
	cout << "¬ведите строку: ";
	//cin >> str;
	input_line(str, n);
	cout << str << endl;
	
	cout << StrLen(str)<<endl;
}
void input_line(char str[], const int n)
{
	SetConsoleCP(1251);
	cin.getline(str, n);
	SetConsoleCP(866);
}
int StrLen(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}