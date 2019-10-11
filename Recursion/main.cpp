#include<iostream>
using namespace std;
//#define factorial
//#define power
//#define fibonacci
//#define fibonacci2
#define fibonacci3
int Factorial(int n)
{
	if (n == 0)return 1; 
	return n * Factorial(n - 1);
}
double Power(int a, int n)
{
	return (n == 0) ? 1 : (n > 0) ? a * Power(a, n - 1) : 1 / a * Power(a, n + 1);
	
}
void Fibonacci(int a)
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
	Fibonacci(a);
}
void Fibonacci2(int a)
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
	Fibonacci2(a);
}
void Fibonacci3(int n, int a = 0, int b = 1);

void main()
{
	setlocale(LC_ALL, "");
#ifdef fibonacci3
	int n;
	cout << "¬ведите количество чисел "; cin >> n;
	Fibonacci3(n);
#endif
#ifdef fibonacci2
	int a;
	cout << "¬ведите количество чисел "; cin >> a;
	Fibonacci2(a);
#endif

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
#ifdef fibonacci
	int a;
	cout << "¬ведите количество чисел "; cin >> a;
	Fibonacci(a);
#endif
}
void Fibonacci3(int n, int a , int b)
{

	if (a > n)
	{
		return;
	}
	cout << a << "\t";
	Fibonacci3(n, b, a + b);
}