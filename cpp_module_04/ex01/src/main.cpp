/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:29:55 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/07 15:37:43 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.h"

int main(void)
{
	//Animal a("bobby");
	//a.makeSound();
	Animal* animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i >= 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	Cat copy(*(Cat *)animals[0]);
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << std::setw(30) << std::left << copy.getBrain()->getIdea(i);
		std::cout << std::setw(30) << std::left << ((Cat *)animals[0])->getBrain()->getIdea(i) << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	return 0;
}