/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:24:55 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/20 10:22:29 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Harl.h"

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string level);

	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
};