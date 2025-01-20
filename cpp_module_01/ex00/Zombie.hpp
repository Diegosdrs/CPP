/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:32:15 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/19 10:55:19 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZONBIE_HPP
#define ZONBIE_HPP

#include "Zombie.h"

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce();

	private:
		std::string name;
};

#endif