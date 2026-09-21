#include "Array.hpp"

template <typename T> 
Array<T>::Array() : _array(0), _size(0) {}

template <typename T> 
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n){}

template <typename T>
Array<T>::Array(const Array& other)
{
	*this = other;
}

/* template <typename T>
Array<T> &Array<T>::operator=(const Array& other)
{
	if (this != other)
	{
		this->_array = other._array;
		this->_size = other._size;
	}
	return *this;
} */

template <typename T> 
unsigned int Array<T>::size() const
{
	return (_size);
}

template<typename T> 
Array<T>::~Array() {}

