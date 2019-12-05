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
bool isPalindrome2(char str[]);
bool isNumber(char str[]);
double Calculator(double irr[], char crr[], int a);
void CharToInt(char str[],double irr[]);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 200;
	char str[n];
	//int z;
	//bool b;
	//cout << "Введите строку: ";
	//input_line(str, n);
	//cout << str << endl;
	//z = StrLen(str);
	//cout << z << endl;
	//UpperCase(str);
	//LowerCase(str);
	//Capitalize(str);
	//Shrink(str);
	//RemoveSpaces(str);
	//cout << str << endl;
	//b = isPalindrome(str);
	//b = isPalindrome2(str);
	/*if (b == true)
	{
		cout << "This is palindrome" << endl;
	}
	else
	{
		cout << "This isn't palindrome" << endl;
	}*/
	/*b = isNumber(str);
	if (b == true)
	{
		cout << "This is number" << endl;
	}
	else
	{
		cout << "This isn't number" << endl;
	} */
	int size = 256;
	double *irr = new double [size] {};
	char *qrr = new char[size] {};
	double w;
	/*cin >> irr[0];
	for (int i = 1; i < size; i++)
	{
		if (crr[i] == 13)
		{
			break;
		}
		else
		{
			a++;
		}
		cin >> crr[i] >> irr[i];
	}*/
	char* crr = new char[size] {};
	cin >> crr;
	int a=0;
	for (int i = 0; crr[i]; i++)
	{
		if (crr[i] == '*' || crr[i] == '/' || crr[i] == '-' || crr[i] == '+' || crr[i] == '^' || crr[i] == '(' || crr[i] == ')')
		{
			qrr[a] = crr[i];
			a++;
		}
	}
	CharToInt(crr, irr);
	w = Calculator(irr, qrr, a);
	cout << w;


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
	char *atr = new char[StrLen(str) + 1]{};
	for (int i = 0; str[i]; i++)atr[i] = str[i];
	RemoveSpaces(atr);
	LowerCase(atr);
	int q = StrLen(atr);
	for (int i = 0; i < q / 2; i++)
	{
		if (atr[i] != atr[q - i - 1])
		{
			delete[] atr;
			return false;
		}
	}
	delete[] atr;
	return true;
}
bool isPalindrome2(char str[])
{
	int n = StrLen(str);
	for (int i = 0; i < n / 2; i++)
	{
		if (str[i] == ' ')i++, n++;
		if (str[n - i - 1] == ' ')n--;
		if (str[i] != str[n - i - 1])
		{
			if (str[i] + 32 != str[n - 1 - i] && str[i] != str[n - i - 1] + 32)return false;
		}
	}
	return true;

}
bool isNumber(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (!(str[i] >= '0'&&str[i] <= '9'))return false;
	}
	return true;
}
double Calculator(double irr[], char crr[], int a)
{

	for (int i = 0; i < a; i++)
	{
		if (crr[i] == ')')
		{
			for (int j = i; j >= 0; j--)
			{
			 
				if (crr[j] == '(')
				{
					double *arr = new double[i - j]{};//числа
					char *err = new char[i-j-1] {};//операции
					for (int e = j,a=0; e < i; e++,a++)
					{
						
						arr[a] = irr[e];
					}
					for (int e = j+1,a=0; e < i; e++,a++)
					{
						err[a] = crr[e];
					}
					double w=Calculator(arr, err, i - j - 1);
					irr[j] = w;
					for (int e = j; crr[e]; e++)
					{
						crr[e] = crr[i+1];
					}
					for (int e = i; irr[e]; e++)
					{
						irr[e] = irr[i - j - 1];
					}
					break;
				}
			}
			
			
		}

	}
	for (int i = 0; i < a; i++)
	{

		if (crr[i] == '^')
		{
			int buffer = irr[i];
			for (int j = 0; j < irr[i + 1]-1; j++)
			{
				irr[i] *= buffer;
			}

			for (int j = i + 1; j < a; j++)
			{
				crr[j - 1] = crr[j];
				irr[j] = irr[j + 1];
			}
			a--;
			i--;
		}
	}
	for (int i = 0; i<a; i++)
	{

		if (crr[i] == '*')
		{
			irr[i] *= irr[i + 1];
			for (int j = i+1; j < a; j++)
			{
				crr[j-1] = crr[j];
				irr[j] = irr[j + 1];
			}
			a--;
			i--;
		}
		if (crr[i] == '/')
		{
			irr[i] /=irr[i + 1];
			for (int j = i + 1; j < a; j++)
			{
				crr[j - 1] = crr[j];
				irr[j] = irr[j + 1];
			}
			a--;
			i--;
		}
	}
	for (int i = 0; i < a; i++)
	{
		if (crr[i] == '-')
		{
			irr[i] -= irr[i + 1];
			for (int j = i + 1; j < a; j++)
			{
				crr[j - 1] = crr[j];
				irr[j] = irr[j + 1];
			}
			a--;
			i--;
		}		
		if (crr[i] == '+')
		{
			irr[i] += irr[i + 1];
			for (int j = i + 1; j < a; j++)
			{
				crr[j - 1] = crr[j];
				irr[j] = irr[j + 1];
			}
			a--;
			i--;
		}
	}
	return irr[0];
}
void CharToInt(char crr[], double irr[])
{
	//if (isNumber(str))
	//{

	int e = 0;
	
		for (int i = 0; crr[i]; i++)
		{ 
			if (crr[i] != '+' && crr[i] != '*' && crr[i] != '/' && crr[i] != '-' && crr[i] != '^')
			{
				if (crr[i] == '(' || crr[i] == ')')
				{
					continue;
				}
				irr[e] *= 10;
				irr[e] += crr[i] - 48;
			}
			else e++;
		}
	//}
}