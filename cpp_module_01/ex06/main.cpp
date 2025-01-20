/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:19:21 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/20 13:25:19 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int	main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
	{
		std::cerr << "Erreur : mauvais nombre d'arguments" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return(0);
}