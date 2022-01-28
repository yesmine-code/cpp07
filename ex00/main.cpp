#include "func.hpp"
#include <iostream>

int main(){
	int i1 = 21, i2 = 12;
	std::string s1 = "hello", s2 = "hi";
	float f1 = 42.42f, f2 = 42.24f;
	char  c1 = 'a', c2 = 'a';

	swap(i1, i2);
	std::cout<< "i1 = "<< i1 <<"  i2 = "<<i2<<std::endl;
	swap(f1, f2);
	std::cout<< "f1 = "<< f1 <<"  f2 = "<<f2<<std::endl;
	std::cout<<"min f1 et f2 = (apres swap ;) = "<<min(f1, f2)<<std::endl;
	std::cout<<"max i1 et i2 = (apres swap ;)= "<<max(i1, i2)<<std::endl;
	std::cout<<"max s1 s2 = "<<max(s1, s2)<<std::endl;
	std::cout<<"max c1 c2 = "<<max(c1, c2)<<std::endl;

/*	Awesome a(2), b(4);
	swap(a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << min(a, b) << std::endl;*/

}