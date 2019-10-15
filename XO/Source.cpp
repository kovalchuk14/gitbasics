#include<iostream>
#include<conio.h>
using namespace std;

#define HORIZ_OFFSET "\t\t\t\t\t\t"


void PrintField(char Field[], const int n);
void Move(char Field[], const int n);
void Check(char Field[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 9+1;
	char Field[SIZE] = {};
	PrintField(Field, SIZE);
}
void PrintField(char Field[], const int n)
{
	cout << "\n\n\n\n\n\n\n";
	for (int i = 6; i >= 0; i -= 3)
	{
		
		if (i == 6)cout << HORIZ_OFFSET << " ---- --- ----"<<endl;
		cout << HORIZ_OFFSET;
		for(int j=0;j<3;j++)
		{
			if (j == 0)cout << " | ";
			cout << Field[i + j] << " | ";
		} 
		cout << endl;
		cout << HORIZ_OFFSET;
		cout << " ---- --- ----" << endl;
	}
	Move(Field, n);
}
void Move(char Field[], const int n)
{
	char key;
	static int h = 1;
	if (h == 10)
	{
		cout << "Draw" << endl;
		return;
	}
		key = _getch();
		if (key == 27)return;
		//cout << (int)key << endl;
		if (Field[key - 49] != 'X'&&Field[key - 49] != '0')
		{
			if (h % 2 == 1)
			{
				Field[key - 49] = 'X';

			}
			if (h % 2 == 0)
			{
				Field[key - 49] = '0';
			}
			h++;
		}
		system("cls");
		Check(Field,n);
		PrintField(Field, n);
}
void Check(char Field[], const int n)
{
	if (Field[0] == Field[1] && Field[0] == Field[2] && Field[0] != 0)
	{
		cout << "player " << Field[0] << " win" << endl;
	}
	if (Field[3] == Field[4] && Field[3] == Field[5]&& Field[3]!=0)
	{
		cout << "player " << Field[3] << " win" << endl;
	}
	if (Field[6] == Field[7] && Field[6] == Field[8] && Field[6] != 0)
	{
		cout << "player " << Field[6] << " win" << endl;
	}
	if (Field[0] == Field[3] && Field[0] == Field[6] && Field[0] != 0)
	{
		cout << "player " << Field[0] << " win" << endl;
	}
	if (Field[1] == Field[4] && Field[1] == Field[7] && Field[1] != 0)
	{
		cout << "player " << Field[1] << " win" << endl;
	}
	if (Field[2] == Field[5] && Field[2] == Field[8] && Field[2] != 0)
	{
		cout << "player " << Field[2] << " win" << endl;
	}
	if (Field[0] == Field[4] && Field[0] == Field[8] && Field[0] != 0)
	{
		cout << "player " << Field[0] << " win" << endl;
	}
	if (Field[2] == Field[4] && Field[2] == Field[6] && Field[2] != 0)
	{
		cout << "player " << Field[2] << " win" << endl;
	}

}