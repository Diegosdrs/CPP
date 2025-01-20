/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:15:33 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/26 15:55:52 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.h"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat& other);
		Cat& operator=(const Cat &other);
		~Cat();
		void makeSound() const;
		Brain *getBrain() const;

	private:
		Brain	*catbrain;
};