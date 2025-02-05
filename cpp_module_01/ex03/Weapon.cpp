/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:08:51 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/19 14:06:29 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(std::string type) : type(type)
{}

Weapon::~Weapon()
{}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

std::string const &Weapon::getType(void)
{
	return (this->type);
}