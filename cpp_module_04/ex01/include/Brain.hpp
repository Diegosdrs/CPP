/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:55:37 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/26 16:05:11 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.h"

class Brain
{
	public:
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain &other);
		~Brain();
		const std::string& getIdea(int index) const;

	private:
		std::string	ideas[100];
};