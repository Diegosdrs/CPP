/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:38:12 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/14 10:06:40 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Scalar.h"

class ScalarConverter
{
    public :
        static void convert(std::string str);
        class OverflowException : public std::exception
        {
            public :
                const char* what() const throw();
        };

        class InvalidImputException : public std::exception
        {
            public :
                const char* what() const throw();
        };
        
    private :
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter& operator=(const ScalarConverter &other);
};