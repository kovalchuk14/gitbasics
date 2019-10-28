#include <iostream>
using namespace std;

//#define Pointer
#define Reference

#ifdef Pointer
template<typename T>
void Exchange(T* a, T* b);
#endif
#ifdef Reference
void Exchange(int& a, int& b);
#endif

void main()
{
	int a = 2;
	int b = 3;
	cout << a << "\t" << b << endl;
	Exchange(a, b);
	cout << a << "\t" << b << endl;
}
#ifdef Pointer
template<typename T>
void Exchange(T* a, T* b)
{
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
}
#endif
#ifdef Reference
void Exchange(int& a, int& b)
{
	int buffer = a;
	a = b;
	b = buffer;
}
#endif
