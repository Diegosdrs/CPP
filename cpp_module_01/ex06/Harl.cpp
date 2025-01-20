/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:23:03 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/06 14:33:40 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::debug()
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl << std::endl;
}

void	Harl::info()
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl << std::endl;
}

void	Harl::warning()
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month" << std::endl << std::endl;
}

void	Harl::error()
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int i = 0;
	int count;

	void (Harl::*ptr_complain[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string str_level[4] = {"debug", "info", "warning", "error"};
	std::string str_level_2[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4)
	{
		if (level == str_level[i] || level == str_level_2[i])
			break;
		i++;
	}
	count = i;
	if (i < 4)
	{
		while (count < 4)
		{
			(this->*ptr_complain[count])();
			count++;
		}
	}
	else
		std::cout << "Bad Harl message !" << std::endl;
}