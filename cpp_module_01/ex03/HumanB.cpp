/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:29:35 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/19 14:32:43 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

HumanB::HumanB(std::string name) : name(name)
{}

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon to attack with!" << std::endl;
}
