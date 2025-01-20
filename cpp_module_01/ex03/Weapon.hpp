/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:04:42 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/19 14:04:38 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "Weapon.h"

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		void		setType(std::string new_type);
		std::string const &getType();

	private:
		std::string type;
};

#endif