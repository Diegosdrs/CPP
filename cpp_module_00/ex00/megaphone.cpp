/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:14:51 by dsindres          #+#    #+#             */
/*   Updated: 2024/12/26 09:46:38 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int i = 0;
	int j = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while(j < ac)
	{
		while(av[j][i] != '\0')
		{
				std::cout << (char) std::toupper(av[j][i]);
				i++;
		}
		i = 0;
		j++;
	}
	return (0);
}
