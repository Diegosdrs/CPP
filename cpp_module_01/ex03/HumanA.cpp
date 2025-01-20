/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:29:35 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/19 13:41:46 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{}

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
