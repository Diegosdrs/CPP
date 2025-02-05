/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:16:39 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/10 09:42:28 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Constructor defaut FragTrap called" << std::endl;
	this->hit_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << name << " FragTrap constructor is called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << " FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other.name)
{
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other); 
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->name << " donne un High Five !" << std::endl;
}
