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
double Calculator(double arr[], char crr[], char qrr[], int a);
void CharToInt(char str[],double irr[]);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 200;
	char str[n];
	//int z;
	//bool b;
	//cout << "Ââåäèòå ñòğîêó: ";
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
		if (crr[i] == '*' || crr[i] == '/' || crr[i] == '-' || crr[i] == '+' || crr[i] == '^')
		{
			qrr[a] = crr[i];
			a++;
		}
	}
	CharToInt(crr, irr);
	w = Calculator(irr, qrr,crr, a);
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
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'à' && str[i] <= 'ÿ')
		{
			str[i] -= 32;
		}
	}
}
void LowerCase(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'À' && str[i] <= 'ß')
		{
			str[i] += 32;
		}
	}
}
void Capitalize(char str[])
{
	if (str[0] >= 'a' && str[0] <= 'z' || str[0] >= 'à' && str[0] <= 'ÿ')str[0] -= 32;
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'à' && str[i] <= 'ÿ') && str[i - 1] == ' ')str[i] -= 32;
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
double Calculator(double arr[], char crr[], char qrr[], int a)
{
	for (int i = 0; i < a; i++)
	{
		if (crr[i] == ')')
		{
			for (int j = i; j >= 0; j--)
			{
			 
				if (crr[j] == '(')
				{
					double *arr = new double[i - j - 1]{};//÷èñëà ÎÁĞÀÒÈ ÑŞÄÀ ÂÍÈÌÀÍÈÅ ËÎÕ Ó ÒÅÁß ÒÓÒ ÂÎÎÁÙÅ ÂÑÅ ÕÅĞÎÂÎ
					char *wrr = new char[] {};//âåñü
					char *err = new char[] {};//îïåğàöèè
					int b = 0;
					for (int z = 0; qrr[z]; z++)
					{
						if (qrr[z] == '*' || qrr[z] == '/' || qrr[z] == '-' || qrr[z] == '+' || qrr[z] == '^')
						{
							err[b] = qrr[z];
							b++;
						}
					}
					for (int z = 0; qrr[z]; z++)
					{
						wrr[z] = qrr[z];
					}
					for (int e = j+1; e < i; i++)
					{
						arr[e] = qrr[e];//

					}
					CharToInt(wrr, arr);
					double w=Calculator(arr, err, qrr, b);

					break;
				}
			}
		}

	}
	for (int i = 0; i < a; i++)
	{

		if (crr[i] == '^')
		{
			int buffer = arr[i];
			for (int j = 0; j < arr[i + 1]-1; j++)
			{
				arr[i] *= buffer;
			}

			for (int j = i + 1; j < a; j++)
			{
				crr[j - 1] = crr[j];
				arr[j] = arr[j + 1];
			}
			a--;
			i--;
		}
	}
	for (int i = 0; i<a; i++)
	{

		if (crr[i] == '*')
		{
			arr[i] *= arr[i + 1];
			for (int j = i+1; j < a; j++)
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
			for (int j = i + 1; j < a; j++)
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
			for (int j = i + 1; j < a; j++)
			{
				crr[j - 1] = crr[j];
				arr[j] = arr[j + 1];
			}
			a--;
			i--;
		}		
		if (crr[i] == '+')
		{
			arr[i] += arr[i + 1];
			for (int j = i + 1; j < a; j++)
			{
				crr[j - 1] = crr[j];
				arr[j] = arr[j + 1];
			}
			a--;
			i--;
		}
	}
	return arr[0];
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
				irr[e] *= 10;
				irr[e] += crr[i] - 48;
			}
			else e++;
		}
	//}
}
