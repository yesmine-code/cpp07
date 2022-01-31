#include "Array.hpp"
#include <stdlib.h>
#define MAX_VAL 750
int main(int, char**)
{
	Array<float> er;
	std::cout<<"empty array size ="<<er.size()<<std::endl;

	Array<int> numbers(7);
	int *numb = new int[10];
	for (int i = 0; i < 10; i++){
		int value = rand();
		numb[i] = value;
		std::cout<<numb[i]<<std::endl;
	}

	std::cout<<"*********************"<<std::endl;

	for (int i = 0; i < 7; i++){
		int value = rand();
		numbers[i] = value;
		std::cout<<numbers[i]<<std::endl;
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[8] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete [] numb;
	return 0;
}


