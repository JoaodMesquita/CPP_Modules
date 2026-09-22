#include "Array.hpp"

template <typename T> 
Array<T>::Array() : _array(0), _size(0) {}

template <typename T> 
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n){ }

template <typename T>
Array<T>::Array(const Array& other) : _array(new T[other._size]), _size(other._size)
{
	for (unsigned int i = 0; i < other._size; i++)
		_array[i] = other._array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		delete[] _array;
		this->_array = new T[other.size];
		this->_size = other._size;
	}
	return *this;
}

template <typename T> 
unsigned int Array<T>::size() const
{
	return (_size);
}

template <typename T> 
T &Array<T>::operator[](unsigned int index)
{
	return (_array[index]); // tenho de mandar exepcao no caso de "out of bounds".
}

template<typename T> 
Array<T>::~Array() {}

