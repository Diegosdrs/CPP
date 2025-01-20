/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:41:11 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/26 14:07:47 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

WrongAnimal::WrongAnimal() : type("Unknown WrongAnimal")
{
	std::cout << "Unknown WrongAnimal parent constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
	std::cout << "WrongAnimal copy constructor is called on " << other.type << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other) 
	{
		this->type = other.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Unknown WrongAnimal parent destructor is called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Unknown WrongAnimal noise *******" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}