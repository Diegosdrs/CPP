/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:20:12 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/07 15:04:48 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

DiamondTrap::DiamondTrap()
{
    std::cout << "Diamond defaut constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    this->energy_points = ScavTrap::energy_points;
    this->hit_points = FragTrap::hit_points;
    this->attack_damage = FragTrap::attack_damage;
    this->name = ClapTrap::name;
    std::cout << "Diamond constructor of " << this->name << " is called" << std::endl;
    std::cout << "hit points = " << this->hit_points << ", energy points = " << this->energy_points << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << this->name << " DiamondTrap destructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
    }
    return (*this);
}

void	DiamondTrap::whoAmI() const 
{
	std::cout << "Hey ! name = " << this->name << ", and ClapTrap's name = " << ClapTrap::name << "." << std::endl;
}
