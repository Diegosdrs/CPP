/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:17:08 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/27 09:57:08 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.h"

Dog::Dog() : Animal("Dog"), dogbrain(new Brain())
{
	std::cout << "Dog without name constructor is called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type), dogbrain(new Brain())
{
	std::cout << "Dog " << type << " constructor is called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	this->dogbrain = new Brain(*other.dogbrain);
	std::cout << "Dog copy constructor is called on " << other.type << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other) 
	{
		this->type = other.type;
		this->dogbrain = new Brain(*other.dogbrain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->dogbrain;
	std::cout << "Dog destructor is called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog *Waf Waf!*" << std::endl;
}

Brain	*Dog::getBrain() const
{
	return (this->dogbrain);
}