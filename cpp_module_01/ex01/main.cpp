/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:07:22 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/19 11:38:12 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
	int	n = 10;
	int	i = 0;

	Zombie *zombie = zombieHorde(n, "paulo");
	while (i < n)
	{
		zombie[i].announce();
		i++;
	}
	delete []zombie;
	return (0);
}