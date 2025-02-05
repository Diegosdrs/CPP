/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:47:34 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/14 15:58:06 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Scalar.h"

const char  *ScalarConverter::OverflowException::what() const throw()
{
    return ("overflow value");
}

const char  *ScalarConverter::InvalidImputException::what() const throw()
{
    return ("invalid imput");
}

/* static int      stringtoint(const std::string &str)
{
    long result = 0;
    long neg = 0;
    size_t i = 0;
    
    if (str[i] == '-')
    {
        neg = -1;
        i++;
    }
    for (; i < str.size(); i++)
        result = result * 10 + (str[i] - '0');
    if (neg != 0)
        result *= neg;
    if (result < std::numeric_limits<int>::min())
        return ((int)std::numeric_limits<int>::min());
    else if (result > std::numeric_limits<int>::max())
        return ((int)std::numeric_limits<int>::max());
    return ((int)result);
} */

static void     convert_int(std::string str)
{
    std::stringstream ss(str);
    double nbr_temp;
    int nbr;
    ss >> nbr_temp;
    
    if (nbr_temp > std::numeric_limits<int>::max() || nbr_temp < std::numeric_limits<int>::min())
        throw ScalarConverter::OverflowException();
    else
        nbr = static_cast<int>(nbr_temp);
    if (nbr < 32 || nbr >= 127)
        std::cout << "char : invalid" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(nbr) << std::endl;
    std::cout << "int : " << nbr << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(2) << static_cast<float>(nbr) << "f" << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(2)<< static_cast<double>(nbr) << std::endl;
}

static void     convert_float(std::string str)
{
    double nbr_temp;
    float  nbr;
    
    std::stringstream ss(str);
    ss >> nbr_temp;
    if (nbr_temp > std::numeric_limits<float>::max() || nbr_temp < std::numeric_limits<float>::min())
        throw ScalarConverter::OverflowException();
    else
        nbr = static_cast<float>(nbr_temp);
    if (nbr < 32 || nbr >= 127)
        std::cout << "char : invalid" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(nbr) << std::endl;
    if (nbr > std::numeric_limits<int>::max() || nbr < std::numeric_limits<int>::min())
        std::cout << "int : invalid size" << std::endl;
    else
        std::cout << "int : " << static_cast<int>((float)nbr) << std::endl;
    std::cout << "float : " << nbr << "f" << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(2)<< static_cast<double>(nbr) << std::endl;
}

static void     convert_double(std::string str)
{
    long double nbr_temp;
    double  nbr;
    
    std::stringstream ss(str);
    ss >> nbr_temp;
    if (nbr_temp > std::numeric_limits<double>::max() || nbr_temp < std::numeric_limits<double>::min())
        throw ScalarConverter::OverflowException();
    else
        nbr = static_cast<double>(nbr_temp);
    if (nbr < 32 || nbr >= 127)
        std::cout << "char : invalid" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(nbr) << std::endl;
    if (nbr > std::numeric_limits<int>::max() || nbr < std::numeric_limits<int>::min())
        std::cout << "int : invalid size" << std::endl;
    else
        std::cout << "int : " << static_cast<int>((float)nbr) << std::endl;
    if (nbr > std::numeric_limits<float>::max() || nbr < std::numeric_limits<float>::min())
        std::cout << "float : invalid size" << std::endl;
    else 
        std::cout << "float : " << nbr << "f" << std::endl;
    std::cout << "double : " << nbr << std::endl;
}

static void    convert_str(std::string str)
{
    if (str == "-inff" || str == "-inf")
    {
        std::cout << "char : " << str << std::endl;
        std::cout << "int : " << std::numeric_limits<int>::min()<< std::endl;
        std::cout << "float : " << std::numeric_limits<float>::min()<< std::endl;
        std::cout << "double : " << std::numeric_limits<double>::min() << std::endl;
    }
    else if (str == "+inff" || str == "+inf")
    {
        std::cout << "char : " << str << std::endl;
        std::cout << "int : " << std::numeric_limits<int>::max()<< std::endl;
        std::cout << "float : " << std::numeric_limits<float>::max()<< std::endl;
        std::cout << "double : " << std::numeric_limits<double>::max() << std::endl;
    }
    else if (str == "nanf" || str == "nan")
    {
        std::cout << "char : Not a number" << std::endl;
        std::cout << "int : Not a number" << std::endl;
        std::cout << "float : nanf" << std::endl;
        std::cout << "double : nan" << std::endl;
    }
}

static void convert_char(std::string str)
{
    std::cout << "char : " << str << std::endl;
    std::cout << "int : " << static_cast<int>(str[0]) << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(2)<< static_cast<float>(str[0]) << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(2)<< static_cast<double>(str[0]) << std::endl;
}

static int valid_number(std::string nbr)
{
    size_t i = 0;
    int count_f = 0;
    int count_point = 0;
    
    if (nbr[0] != '-' && !std::isdigit(nbr[0]))
        return (0);
    if (nbr[0] == '-')
        i = 1;
    if (!std::isdigit(nbr[i]))
        return (0);
    while (i < nbr.size())
    {
        if (nbr[i] != 'f' && !std::isdigit(nbr[i]) && nbr[i] != '.')
            return (0);
        if (nbr[i] == 'f')
            count_f++;
        if (nbr[i] == '.')
            count_point++;
        i++;
    }
    if (count_f > 1 || count_point > 1)
        return (0);
    if (count_f == 1 && count_point == 1)
    {
        if (nbr[nbr.size() - 1] != 'f' || nbr[nbr.size() - 2] == '.')
             return (0);
        return (2);
    }
    else if (count_f == 1 && count_point == 0)
    {
        if (nbr[nbr.size() - 1] != 'f')
           return (0);
        return (2);
    }
    else if (count_f == 0 && count_point == 1)
    {
        if (nbr[nbr.size() - 1] == '.')
             return (0);
        return (3);
    }
    else
        return (1);
}

void    ScalarConverter::convert(std::string str)
{
    int result;
    if (str == "-inff" || str == "-inf" || str == "+inff" || str == "+inf" || str == "nan")
            convert_str(str);
    else if (std::isprint(str[0]) && !std::isdigit(str[0]) && str.length() == 1)
        convert_char(str);
    else if ((result = valid_number(str)) != 0)
    {
        if (result == 1)
        {
            try
            {
                convert_int(str);
            }
            catch(const std::exception &e)
            {
                std::cerr << "Error because " << e.what() << std::endl;
            }
        }
        else if (result == 2)
        {
            try
            {
                convert_float(str);
            }
            catch(const std::exception &e)
            {
                std::cerr << "Error because " << e.what() << std::endl;
            }
        }
        else if (result == 3)
        {
            try
            {
                convert_double(str);
            }
            catch(const std::exception& e)
            {
                std::cerr << "Error because " << e.what() << std::endl;
            }
        }
    }
    else
        throw ScalarConverter::InvalidImputException();
}
