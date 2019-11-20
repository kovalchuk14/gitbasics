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


void main()
{
	setlocale(LC_ALL, "");
	const int n = 20;
	char str[n];
	cout << "¬ведите строку: ";
	input_line(str, n);
	cout << str << endl;
	cout <<StrLen(str)<<endl;
	//UpperCase(str);
	//LowerCase(str);
	//Capitalize(str);
	Shrink(str);
	//RemoveSpaces(str);
	cout << str << endl;
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
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
	}
}
void LowerCase(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
	}
}
void Capitalize(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (i == 0 && str[i + 1] > 96 && str[i + 1] < 123)
		{
			str[i] -= 32;
		}
		if (str[i] == 32 && str[i + 1] > 96 && str[i+1] < 123)
		{
			str[i + 1] -= 32;
		}
	}
}
void Shrink(char str[])
{
	
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == 32&& str[i-1] == 32)
		{
		for (int j = i; j < str[i]; j++)
			{
				str[j] = str[j+1];
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
		for (int j = i; j < str[i]; j++)
			{
				str[j] = str[j+1];
			}
		i--;
	    }
	}
}
