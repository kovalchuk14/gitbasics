#include <iostream>
using namespace std;
//#define pointers_basics
//#define  declaration_of_pointers
void main()
{
	setlocale(LC_ALL, "");
#ifdef pointers_basics
	int a = 2;
	int *pa = &a;
	cout<<a<<endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;

	int *pb;
	int b = 3;
	pb = &b;
	cout << pb << endl;
	cout << *pb << endl;
#endif
#ifdef declaration_of_pointers
	int a, b, c;
	int *pa, *pb, *pc;
	int* pd, pe, pf;

#endif
	const int n = 5;
	short arr[n] = {3,5,8,13,21};
	cout << *arr<< endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
}