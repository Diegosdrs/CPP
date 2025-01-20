/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:11:12 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/19 10:48:46 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie	*newZombie(std::string name)
{
	Zombie *zombie22 = new Zombie(name);
	return (zombie22);
}