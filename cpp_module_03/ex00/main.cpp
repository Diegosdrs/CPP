/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:13:59 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/07 10:23:04 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main( void )
{
	ClapTrap A("Leon S.Kennedy");
	ClapTrap B("Zombie");

	A.attack("Zombie");
	B.takeDamage(6);
	A.attack("Zombie");
	B.takeDamage(3);
	B.beRepaired(2);
	A.attack("Zombie");
	B.takeDamage(7);
	A.attack("Zombie");
	B.takeDamage(7);
	
	return (0);
}