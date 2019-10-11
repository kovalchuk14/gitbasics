#include<iostream>
using namespace std;
//#define factorial
//#define power
//#define fibanachi
#define fibanachi2
int Factorial(int n)
{
	if (n == 0)return 1; 
	return n * Factorial(n - 1);
}
double Power(int a, int n)
{
	return (n == 0) ? 1 : (n > 0) ? a * Power(a, n - 1) : 1 / a * Power(a, n + 1);
	
}
void Fibanachi(int a)
{

   static int d;
   static int b = 0;
   static int c = 1;
	d = b + c;
   if (d >= a) return;
	if (d == 1)cout << 0 << "\t" << 1 << "\t"; 
	cout << d<<"\t";
	b = c;
	c = d;
	Fibanachi(a);
}
void Fibanachi2(int a)
{

	static int k=0;
	static int d;
	static int b = 0;
	static int c = 1;
	d = b + c;
	if (k+2 == a) return;
	if (d == 1)cout << 0 << "\t" << 1 << "\t";
	k++;
	cout << d << "\t";
	b = c;
	c = d;
	Fibanachi2(a);
}
void main()
{
#ifdef fibanachi2
	int a;
	cout << "¬ведите количество чисел "; cin >> a;
	Fibanachi2(a);
#endif
	setlocale(LC_ALL, "");

#ifdef factorial
	int n;
	cout << "¬ведите число "; cin >> n;
	cout<< Factorial(n);
#endif
#ifdef power 
	int n;
	int a;
	cout << "¬ведите число "; cin >> a;
	cout << "¬ведите степень "; cin >> n;
	cout << Power(a,n);
#endif
#ifdef fibanachi
	int a;
	cout << "¬ведите количество чисел "; cin >> a;
	Fibanachi(a);
#endif
}