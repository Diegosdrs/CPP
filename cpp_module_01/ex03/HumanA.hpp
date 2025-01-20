/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:24:55 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/19 13:42:53 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.h"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &Weapon);
		~HumanA();
		void	attack();

	private:
		std::string name;
		Weapon	&weapon;
};

#endif