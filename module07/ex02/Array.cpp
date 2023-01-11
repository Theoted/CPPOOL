/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:40:28 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/11 18:51:54 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _size(0), _array(nullptr) {}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n) { _array = new T[n]; };

template<typename T>
Array<T>::Array(const Array &Array) { *this = Array; };

template<typename T>
Array<T>::~Array()
{
    if (_array)
        delete [] _array;
};

template<typename T>
Array<T> &Array<T>::operator=(const Array &Array)
{
    _array = Array._array;
    _size = Array._size;
    return (*this);
}

template<typename T>
T   &Array<T>::operator[](const int i)
{
    if (i > -1 && i < _size)
        return (_array[i]);
    throw UnvalidId();
}

template<typename T>
int Array<T>::size() const { return (_size); }