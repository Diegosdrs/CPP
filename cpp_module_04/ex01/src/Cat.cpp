/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:17:08 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/27 09:57:06 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.h"

Cat::Cat() : Animal("Cat"), catbrain(new Brain())
{
	std::cout << "Cat without name constructor is called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type), catbrain(new Brain())
{
	std::cout << "Cat " << type << " constructor is called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	this->catbrain = new Brain(*other.catbrain);
	std::cout << "Cat copy constructor is called on " << other.type << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other) 
	{
		this->type = other.type;
		this->catbrain = new Brain(*other.catbrain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->catbrain;
	std::cout << "Cat destructor is called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat *Miew Miew !*" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return (this->catbrain);
}