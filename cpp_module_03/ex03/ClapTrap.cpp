/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:41:11 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/25 15:42:35 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << name << " ClapTrap constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << this->name << " attaque " << target << std::endl;
		this->energy_points--;
	}
	else
		std::cout << this->name << " ne peut attaquer" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0)
	{
		std::cout << this->name << " est deja mort..." << std::endl;
	}
	else if (this->hit_points > 0 && amount >= this->hit_points)
	{
		this->hit_points = 0;
		std::cout << this->name << " a subi une attaque mortelle !" << std::endl;
	}
	else
	{
		this->hit_points -= amount;
		std::cout << this->name << " a subit une attaque de " << amount << " de degats !" << std::endl;
		std::cout << "Il n'a desormais plus que " << this->hit_points << " points de vie !" << std::endl; 
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points > 0)
	{
		this->hit_points += amount;
		this->energy_points--;
		std::cout << this->name << " se repare de " << amount << " pdv.." << std::endl;
		std::cout << "Il a desormais " << this->hit_points << " points de vie !" << std::endl;
	}
	else
		std::cout << this->name << " ne peut se reparer" << std::endl;
}
