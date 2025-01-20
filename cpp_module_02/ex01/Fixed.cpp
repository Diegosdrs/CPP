/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:41:11 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/06 14:47:39 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed() : nbr(0)
{
	std::cout << "Default constructor is called" << std::endl;
}

Fixed::Fixed(const int entier)
{
	std::cout << "Int constructor is called" << std::endl;
	this->nbr = entier << nbr_bits;
}

Fixed::Fixed(const float flottant)
{
	std::cout << "Float constructor called" << std::endl;
	this->nbr = int(roundf(flottant * (1 << nbr_bits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) 
	{
		this->nbr = other.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nbr);
}

void Fixed::setRawBits(int const raw)
{
	this->nbr = raw;
}

float Fixed::toFloat(void) const
{
	return (float(this->nbr) / (1 << nbr_bits));
}

int Fixed::toInt(void) const
{
	return (this->nbr >> nbr_bits);
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return (o);
}