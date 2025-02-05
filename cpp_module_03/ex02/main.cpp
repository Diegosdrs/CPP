/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:13:59 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/25 17:27:45 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void)
{
	ClapTrap A("Clap");
	ScavTrap B("Scav");
	FragTrap C("Frag");

	A.attack("Scav");
	B.takeDamage(10);
	A.attack("Scav");
	B.takeDamage(68);
	B.guardGate();
	B.beRepaired(17);
	B.attack("Frag");
	C.takeDamage(20);
	C.beRepaired(4);
	C.attack("Scav");
	B.takeDamage(30);
	C.highFivesGuys();

	return(0);
}