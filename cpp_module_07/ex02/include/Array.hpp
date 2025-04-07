/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:44:20 by dsindres          #+#    #+#             */
/*   Updated: 2025/04/02 10:28:33 by dsindres         ###   ########.fr       */
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

        size_t size(void) const;
        T& operator[](size_t n);
        const T& operator[](size_t n) const;
        
        class OutOfBoundException : public std::exception
        {
            public :
                const char* what() const throw();
        };
        
    private :
        size_t len;
        T   *array; 
};
