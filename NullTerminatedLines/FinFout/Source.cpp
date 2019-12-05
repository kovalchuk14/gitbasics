#include <iostream>
#include <fstream>

//#define WRITE_TO_FILE
#define READ_FROM_FILE
void main()
{
	setlocale(LC_ALL, "");
#ifdef WRITE_TO_FILE
	std::cout << "Hello world"; 
	std::ofstream fout;
	fout.open("File.txt",std::ios::app);

	fout << "Hello world" << std::endl;
	fout<< "Sam privet"<<std::endl;
	//fout.open("AnotherFile.txt");
	//fout << "Sam privet";

	fout.close();
	system("notepad File.txt");
#endif
#ifdef READ_FROM_FILE
	std::ifstream fin;
	fin.open("File.txt");

	const int n = 256;
	char sz_buffer[n] = {};

	while (!fin.eof())
	{
		fin >> sz_buffer;
		std::cout << sz_buffer << std::endl;
	}

	fin.close();
#endif

}
