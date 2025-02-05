/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:17:08 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/26 14:03:56 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor is called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor is called on " << other.type << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other) 
	{
		this->type = other.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor is called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat *Miew Miew !*" << std::endl;
}