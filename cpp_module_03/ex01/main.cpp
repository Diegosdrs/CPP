/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:13:59 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/07 10:23:49 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void)
{
	ClapTrap A("Clap");
	ScavTrap B("Scav");

	A.attack("Scav");
	B.takeDamage(10);
	A.attack("Scav");
	B.takeDamage(68);
	B.guardGate();
	B.beRepaired(17);
	B.attack("Clap");
	A.takeDamage(20);

	return(0);
}