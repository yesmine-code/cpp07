#include <iostream>
#include <cstdlib>
#include "iter.hpp"

template<typename T>
void	print(T &p ){
	std::cout << "value =  " << p << std::endl;
}

void	fillwithrandNum(int &ran){
	ran = rand();
}

void	fillwit0(int &ran){
	ran = 0;
}
int	main( void )
{
	std::string	Tab[4];
	int			*ptr = new int[3];

	Tab[0] = "looooooool";
	Tab[1] = "cpp cpp cppc cppc cppppp ";
	Tab[2] = "blah blah blah ";
	Tab[3] = "heloooooo";
	::iter(Tab, 4, &print);
	::iter(ptr, 3, &fillwithrandNum);
	::iter(ptr, 3, &print);
	::iter(ptr, 3, &fillwit0);
	::iter(ptr, 3, &print);
	
}