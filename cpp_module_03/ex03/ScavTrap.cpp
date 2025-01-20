/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:16:39 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/10 09:43:07 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Constructor defaut ScavTrap called" << std::endl;
	this->energy_points = 50;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << name << " ScavTrap constructor is called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other.name)
{
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other); 
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << this->name << " ScavTrap attaque " << target << " causant " << this->attack_damage << " pts de dommage !" << std::endl;
		this->energy_points--;
	}
	else
		std::cout << this->name << " ne peut attaquer" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " est en mode gardien de porte !" << std::endl;
}