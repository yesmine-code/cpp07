#include "func.hpp"
#include <iostream>

int main(){
	int i1 = 21, i2 = 12;
	std::string s1 = "hello", s2 = "hi";
	float f1 = 42.42f, f2 = 42.24f;
	char  c1 = 'a', c2 = 'a';

	::swap(i1, i2);
	std::cout<< "i1 = "<< i1 <<"  i2 = "<<i2<<std::endl;
	::swap(f1, f2);
	std::cout<< "f1 = "<< f1 <<"  f2 = "<<f2<<std::endl;
	std::cout<<"min f1 et f2 = (apres swap ;) = "<<min(f1, f2)<<std::endl;
	std::cout<<"max i1 et i2 = (apres swap ;)= "<<max(i1, i2)<<std::endl;
	std::cout<<"max s1 s2 = "<<max(s1, s2)<<std::endl;
	std::cout<<"max c1 c2 = "<<max(c1, c2)<<std::endl;
	std::cout<<"subject main :" <<std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
/*	a = 3, b = 2
	min(a, b) = 2
	max(a, b) = 3
	c = chaine2, d = chaine1
	min(c, d) = chaine1
	max(c, d) = chaine2*/ //what should print
}