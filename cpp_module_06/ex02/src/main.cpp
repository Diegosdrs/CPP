/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:53:58 by dsindres          #+#    #+#             */
/*   Updated: 2025/03/25 12:59:36 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Identify.h"

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A construit" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B construit" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C construit" << std::endl;
}

void identify(Base& p) 
{
    try 
	{
        A& a = dynamic_cast<A&>(p);
		(void)a;
        std::cout << "A construit" << std::endl;
        return;
    } catch (const std::exception& e) {}
    try
	{
        B& b = dynamic_cast<B&>(p);
		(void)b;
        std::cout << "B construit" << std::endl;
        return;
    } catch (const std::exception& e) {}
    try
	{
        C& c = dynamic_cast<C&>(p);
		(void)c;
        std::cout << "C construit" << std::endl;
        return;
    } catch (const std::exception& e) {}
}

Base*	generate(void)
{
	srand(time(NULL));
	int nbr_class = rand() % 3;
	Base *ptr;
	
	if (nbr_class == 1)
	{
		ptr = new A;
		std::cout << "A construit" << std::endl;
	}
	else if (nbr_class == 2)
	{
		ptr = new B;
		std::cout << "B construit" << std::endl;
	}
	else
	{
		ptr = new C;
		std::cout << "C construit" << std::endl;
	}
	return (ptr);
}

int main(void)
{
	Base *ptr = generate();
	
	identify(ptr);
	identify(*ptr);

	delete (ptr);
    return (0);
}