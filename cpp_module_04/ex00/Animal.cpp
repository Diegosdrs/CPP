/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:41:11 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/26 14:08:33 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal() : type("Unknown animal")
{
	std::cout << "Unknown animal parent constructor is called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal copy constructor is called on " << other.type << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other) 
	{
		this->type = other.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Unknown animal parent destructor is called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Unknown animal noise *******" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}