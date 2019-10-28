#include <iostream>
using namespace std;

/*int sum(int n,int value, ...)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += *(&value + i);
	}
	return sum;
}*/
template<typename T>
int sum(T value ...)
{ 
	int sum = 0;
	int* u = &value;		
	do
	{ 
		if (*u!= 0)
		{
			sum += *(u++);
		}
	} while (*u!=0);
	return sum;
}

void main()
{
	cout << sum(3, 5, 8, 13, 21, 34,0);
}