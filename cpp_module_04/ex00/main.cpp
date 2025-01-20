/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:29:55 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/07 15:18:58 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << "-------------" << std::endl << std::endl;

	const WrongAnimal *hal = new WrongAnimal();
	const WrongAnimal *lois = new WrongCat();
	std::cout << lois->getType() << " " << std::endl;
	hal->makeSound();
	lois->makeSound();

	delete(meta);
	delete(j);
	delete(i);
	delete(hal);
	delete(lois);
	return 0;
}