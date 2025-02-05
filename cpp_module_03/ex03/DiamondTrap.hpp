/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:54:54 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/07 12:20:27 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.h"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
        DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &other);
		DiamondTrap& operator=(DiamondTrap const &other);
		~DiamondTrap();
		void	whoAmI() const;

	private:
        std::string name;
};