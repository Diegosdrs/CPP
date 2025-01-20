/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:52:15 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/07 16:11:36 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Materia.h"

AMateria::AMateria() : type("no type")
{
    std::cout << "No type Materia constructor" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
    std::cout << "Materia constructor build " << this->type << " type" << std::endl;
}

AMateria::AMateria(AMateria const &other)
{
    (*this) = other;
    std::cout << "Materia copy constructor is called." << std::endl;
}

AMateria &AMateria::operator=(AMateria const &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AMateria::~AMateria()
{
    std::cout << "Materia destructor is called" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->type);
} 
