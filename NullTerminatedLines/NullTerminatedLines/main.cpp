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
int Calculator(int arr[], char crr[], int a);
void CharToInt(char str[],int irr[]);


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
	int *irr = new int[size] {};
	int w;
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
	for (int i = 0; crr[i]; i++)if (crr[i] == '*' || crr[i] == '/' || crr[i] == '-' || crr[i] == '+')a++;
	CharToInt(crr, irr);
	w = Calculator(irr, crr, a);
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
int Calculator(int arr[], char crr[], int a)
{
	for (int i = 0; i < a; i++)
	{

		if (crr[i] == '*')
		{
			arr[i] *= arr[i + 1];
			for (int j = i+1; j < a; i++)
			{
				crr[j-1] = crr[j];
				arr[j] = arr[j + 1];
			}
			a--;
			i--;
		}
		if (crr[i] == '/')
		{
			arr[i] /= arr[i + 1];
			for (int j = i + 1; j < a; i++)
			{
				crr[j - 1] = crr[j];
				arr[j] = arr[j + 1];
			}
			a--;
			i--;
		}
	}
	for (int i = 0; i < a; i++)
	{
		if (crr[i] == '-')
		{
			arr[i] -= arr[i + 1];
			for (int j = i + 1; j < a; i++)
			{
				crr[j - 1] = crr[j];
				arr[j] = arr[j + 1];//ошибка
			}
			a--;
			i--;
		}		
		if (crr[i] == '+')
		{
			arr[i] += arr[i + 1];
			for (int j = i + 1; j < a; i++)
			{
				crr[j - 1] = crr[j];
				arr[j] = arr[j + 1];//ошибка
			}
			a--;
			i--;
		}
	}
	return arr[0];
}
void CharToInt(char str[],int irr[])
{
	//if (isNumber(str))
	//{
	int n = 0;
		for (int i = 0; str[i]; i++)
		{
			if (str[i] != '+' && str[i] != '*' && str[i] != '/' && str[i] != '-' )
			{
				irr[n] *= 10;
				irr[n] += str[i] - 48;
			}
			else n++;
		}
	//}
}