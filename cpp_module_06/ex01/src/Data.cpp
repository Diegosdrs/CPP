/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:27:40 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/14 10:39:51 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.h"

Data::Data() : name("Unknown"), value(0)
{
    std::cout << "Defaut constructor called" << std::endl;
}

Data::Data(std::string name, int value) : name(name), value(value)
{
	std::cout << "Data constructor " << name << " with value = " << value << std::endl;
}

Data::Data(const Data& other) : name(other.name), value(other.value)
{
	std::cout << "Data copy constructor is called " << std::endl;
}

Data &Data::operator=(const Data &other)
{
	if (this != &other) 
	{
		this->name = other.name;
        this->value = other.value;
	}
	return (*this);
}

Data::~Data()
{
	std::cout << "Data destructor is called" << std::endl;
}