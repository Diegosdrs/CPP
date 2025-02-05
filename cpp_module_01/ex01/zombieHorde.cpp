/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:07:02 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/19 11:35:24 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie	*zombieHorde(int n, std::string name)
{
	int	i = 0;

	Zombie *zombie = new Zombie[n];
	while (i < n)
	{
		zombie[i].set_name(name + int_to_string(i + 1));
		i++;
	}
	return (zombie);
}

std::string int_to_string(int num)
{
	std::ostringstream oss;
	oss << num;
	return (oss.str());
}