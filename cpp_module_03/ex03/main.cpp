/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:13:59 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/07 15:04:08 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void)
{
	DiamondTrap	Arnold("Arnold");
	DiamondTrap	Benoit("Benoit");

	Arnold.attack("Benoit");
	Benoit.takeDamage(30);
	Benoit.attack("Arnold");
	Arnold.takeDamage(30);
	Arnold.beRepaired(15);
	Arnold.whoAmI();
	return 0;
}