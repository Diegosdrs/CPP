/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:28:15 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/19 10:06:29 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Le Zombie " << name << " a ete cree" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << " Le Zombie " << name << " est mort" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
