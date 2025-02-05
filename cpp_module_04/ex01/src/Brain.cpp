/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:41:11 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/27 09:57:03 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.h"

Brain::Brain()
{
	std::cout << "Brain constructor is called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::ostringstream str;
		str << rand() % 100 + 1;
		this->ideas[i] = "Idea num " + str.str();
	}
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other) 
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called" << std::endl;
}

const std::string& Brain::getIdea(int index) const
{
	return (this->ideas[index]);
}