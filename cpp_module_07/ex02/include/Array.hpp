/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:44:20 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/15 15:35:51 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Header.hpp"

template<typename T>
class Array
{
    public :
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array& operator=(Array const &other);
        ~Array();

        int size(void) const;
        T& operator[](int n);
        T operator[](int n) const;
        
        class OutOfBoundException : public std::exception
        {
            public :
                const char* what() const throw();
        };
        
    private :
        int len;
        T   *array; 
};
