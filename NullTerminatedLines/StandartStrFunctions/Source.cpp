#include<iostream>

void main()
{
	setlocale(LC_ALL, "");
	const int n = 256;
	char str[n]{};
	std::cout << ""; std::cin >> str;
	std::cout << str << std::endl;
	std::cout << strlen(str) << std::endl;
	char buffer[n];
	strcpy(buffer, str);
	std::cout << buffer << std::endl;
}