/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:43:18 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/26 18:20:01 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array{
private:
	T *array;
	unsigned int len;
public:
	Array();
	Array(unsigned int len);
	Array(const Array&);
	Array &operator = (const Array&);
	T& operator[](int i);
	unsigned int size();

	~Array();
};

template <typename T>
Array<T>::Array()
{
	this->array = new T[0]();
	this->len = 0;
}

template <typename T>
Array<T>::Array(unsigned int len)
{
	this->array = new T[len]();
	this->len = len;
}

template <typename T>
Array<T>::Array(Array<T> const &ptr)
{
	*this = ptr;
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T> const &ptr)
{
	unsigned int i = 0;
	delete[] this->array;
	this->len = ptr.len;
	this->array = new T[this->len];
	while (i < this->len)
	{
		this->array[i] = ptr.array[i];
		i++;
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](int i)
{
	if (i < 0 || i >= (int)this->len)
		throw:: std::exception();
	return this->array[i];
}

template <typename T>
unsigned int Array<T>::size()
{
	return this->len;
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->array;
}

#endif