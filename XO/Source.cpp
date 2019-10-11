#include<iostream>
#include<conio.h>
using namespace std;

#define HORIZ_OFFSET "\t\t\t\t\t\t"


void PrintField(char Field[], const int n);
void Move(char Field[], const int n);

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
	//if (h = 10)return;
		key = _getch();
		if (key == 27)return;
		//cout << (int)key << endl;
		if (h % 2 == 1)
		{
			Field[key - 49] = 'X';
			
		}
		if (h % 2==0)
		{
			Field[key - 49] = '0';
		}
			h++;
		
		system("cls");
		PrintField(Field, n);


}