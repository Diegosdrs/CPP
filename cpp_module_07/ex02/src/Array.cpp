/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:51:18 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/20 10:45:29 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Header.hpp"

template<typename T>
Array<T>::Array() 
{
    this->len = 0;
    this->array = new T[0];
    std::cout << "Constructeur par defautl called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : len(n)
{
    this->array = new T[n];
    this->len = n;
    for (size_t i = 0; i < n; i++)
        this->array[i] = 0;
    std::cout << "Constructeur called, array size " << len << std::endl;
}

template<typename T>
Array<T>::Array(const Array &other)
{
    this->array = new T[other.len];
    this->len = other.len;
    for (int count = 0; count < len; count++)
        this->array[count] = other.array[count];
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &other)
{
    if (this != &other)
    {
        delete [] this->array;
        this->array = new T[other.len];
        this->len = other.len;
        for (int count = 0; count < len; count++)
            this->array[count] = other.array[count];
    }
    return (*this);
}

template<typename T>
Array<T>::~Array()
{
    delete[] (this->array);
    std::cout << "Destructor is called" << std::endl;
}

template<typename T>
int Array<T>::size(void) const
{
    return (this->len);
}

template<typename T>
const char *Array<T>::OutOfBoundException::what() const throw()
{
    return ("Error : index out of bounds");
}

template<typename T>
T& Array<T>::operator[](int n)
{
    if (n >= this->len || n < 0)
        throw (Array::OutOfBoundException());
    return (this->array[n]);
}

template<typename T>
T Array<T>::operator[](int n) const 
{
    if (n >= this->len || n < 0)
        throw (Array::OutOfBoundException());
    return (this->array[n]);
}
