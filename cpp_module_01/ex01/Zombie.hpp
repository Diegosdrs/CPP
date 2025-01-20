/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:32:15 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/19 11:39:30 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZONBIE_HPP
#define ZONBIE_HPP

#include "Zombie.h"

class Zombie
{
	public:
		Zombie();
		//Zombie(std::string name);
		~Zombie();
		void	announce();
		void	set_name(std::string name);

	private:
		std::string name;
};

#endif