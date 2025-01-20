/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:17:08 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/26 14:06:34 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor is called on " << other.type << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other) 
	{
		this->type = other.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor is called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat *HI HAAAAAN !*" << std::endl;
}