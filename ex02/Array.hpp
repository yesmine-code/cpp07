#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
template<typename T>
class Array{
private:

	int		sizearr;
	T		*array;
public:

	Array<T>(){
		this->sizearr = 0;
		this->array = NULL;
	}
	Array<T>(int size){
		this->sizearr = size;
		if (size < 0)
			throw std::overflow_error("invalid size");
		this->array = new T[size];
	}
	Array<T>(const Array<T> &src){
		*this = src;
	}
	~Array<T>(){
		if (this->sizearr > 0)
			delete [] this->array;
	}

	Array<T>	&operator=(const Array<T> &src){
		if (this == &src)
			return *this;
		if (this->sizearr > 0)
			delete [] this->array;
		this->sizearr = src.size();
		this->array = new T[this->sizearr];
		for (int i = 0; i < this->sizearr; i++)
			this->array[i] = src[i];
		return *this;
	}
	T			&operator[](const int idx) const{
		if (idx >= this->sizearr || idx < 0)
			throw std::overflow_error("invalid index");
		return this->array[idx];
	}
	int			size() const{
		return this->sizearr;
	}
};

template<typename T>
std::ostream	&operator<<( std::ostream &os, const Array<T> &instance );

#endif