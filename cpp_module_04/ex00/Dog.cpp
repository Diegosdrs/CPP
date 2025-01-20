/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:17:08 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/26 14:05:21 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor is called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor is called on " << other.type << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other) 
	{
		this->type = other.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor is called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog *Waf Waf !*" << std::endl;
}