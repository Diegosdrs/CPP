/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:40:15 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/08 10:42:24 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.h"

int	main(void)
{
	Bureaucrat *a;

	try
	{
		a = new Bureaucrat("Abraham Willis Stevenson", 15);
		//std::cout << a->getName() << " grade " << a->getGrade() << std::endl;
		std::cout << *a << std::endl;
		a->decremente();
		std::cout << *a << std::endl;
		a->incremente();
		std::cout << *a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	delete a;
	return (0);
}
