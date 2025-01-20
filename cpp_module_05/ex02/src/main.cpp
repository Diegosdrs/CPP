/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:40:15 by dsindres          #+#    #+#             */
/*   Updated: 2024/12/03 15:00:51 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << std::endl;

	// CREATION BUREAUCRAT
	Bureaucrat chris("chris", 1);

	std::cout << std::endl;
	std::cout << "----------------------------" << std::endl << std::endl;

	// CREATION FORM
	ShrubberyCreationForm b("home");
	ShrubberyCreationForm c(b);
	RobotomyRequestForm d("daft");
	RobotomyRequestForm e(d);
	PresidentialPardonForm f("Machiavel");
	PresidentialPardonForm g(f);
	

	std::cout << std::endl;
	std::cout << "----------------------------" << std::endl << std::endl;

	// MANIPULATION
	chris.signForm(b);
	chris.executeForm(b);
	chris.signForm(e);
	chris.executeForm(d);
	chris.executeForm(e);
	chris.signForm(f);
	chris.executeForm(g);
	chris.executeForm(f);

	std::cout << std::endl;
	std::cout << "----------------------------" << std::endl << std::endl;

	return (0);
}
/* int	main(void)
{
	Bureaucrat *a;
	Bureaucrat *b;
	Form *f;

	try
	{
		a = new Bureaucrat("Abraham Willis Stevenson", 1);
		b = new Bureaucrat("Jonah R. Hargrove", 10);
		//std::cout << a->getName() << " grade " << a->getGrade() << std::endl;
		//std::cout << *a << std::endl;
		f = new Form("first contract", 5, 5);
		b->signForm(*f);
		a->signForm(*f);
		b->signForm(*f);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	delete a;
	delete b;
	std::cout << *f << std::endl;
	delete f;
	try
	{
		Form contract("second contract", 155, 15);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
} */
