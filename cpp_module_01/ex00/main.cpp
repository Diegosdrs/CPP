/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:14:05 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/19 10:54:50 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	Zombie zombie1("rob");
	Zombie *zombie2 = newZombie("jon");
	zombie1.announce();
	randomChump("pat");
	zombie2->announce();
	delete (zombie2);
	return (0);
}