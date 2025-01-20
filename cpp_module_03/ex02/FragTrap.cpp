/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:16:39 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/07 11:30:46 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

FragTrap::FragTrap(){}

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

void FragTrap::attack(const std::string& target)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << this->name << " FragTrap attaque " << target << " causant " << this->attack_damage << " pts de dommage !" << std::endl;
		this->energy_points--;
	}
	else
		std::cout << this->name << " ne peut attaquer" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->name << " donne un High Five !" << std::endl;
}