#include <iostream>
#include <Windows.h>
using namespace std;

void input_line(char str[], const int n);
int StrLen(char str[]);
void UpperCase(char str[]);
void LowerCase(char str[]);
void Capitalize(char str[]);
void Shrink(char str[]);
void RemoveSpaces(char str[]);
bool isPalindrome(char str[]);


void main()
{
	setlocale(LC_ALL, "");
	const int n = 200;
	char str[n];
	int z;
	bool b;
	cout << "Введите строку: ";
	input_line(str, n);
	cout << str << endl;
	z = StrLen(str);
	cout << z << endl;
	//UpperCase(str);
	//LowerCase(str);
	//Capitalize(str);
	//Shrink(str);
	//RemoveSpaces(str);
	//cout << str << endl;
	b = isPalindrome(str);
	if (b == true)
	{
		cout << "This is palindrome" << endl;
	}
	else
	{
		cout << "This isn't palindrome" << endl;
	}

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
void UpperCase(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'а' && str[i] <= 'я')
		{
			str[i] -= 32;
		}
	}
}
void LowerCase(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'А' && str[i] <= 'Я')
		{
			str[i] += 32;
		}
	}
}
void Capitalize(char str[])
{
	if (str[0] >= 'a' && str[0] <= 'z' || str[0] >= 'а' && str[0] <= 'я')str[0] -= 32;
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'а' && str[i] <= 'я') && str[i - 1] == ' ')str[i] -= 32;
	}
}
void Shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == 32 && str[i - 1] == 32)
		{
			for (int j = i; j < str[i]; j++)
			{
				str[j] = str[j + 1];
			}
			i--;
		}
	}
}
void RemoveSpaces(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == 32)
		{
			for (int j = i; str[j]; j++)
			{
				str[j] = str[j + 1];
			}
			i--;
		}
	}
}
bool isPalindrome(char str[])
{
	char *atr = new char[StrLen(str)+1]{};
	for (int i = 0; str[i]; i++)atr[i] = str[i];
	RemoveSpaces(atr);
	LowerCase(atr);
	int q = StrLen(atr);
	for (int i = 0; i < (q + 1) / 2; i++)
	{
		if (atr[i] != atr[q - i - 1])
		{
			//a++;
			delete[] atr;
			return false;
		}
	}

	delete[] atr;
	return true;
}