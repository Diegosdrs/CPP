/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:40:15 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/08 11:07:41 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

int main(void)
{
	std::cout << std::endl;

	// CREATION BUREAUCRAT et INTERN
	Bureaucrat chris("chris", 1);
	Intern	student;

	std::cout << std::endl;
	std::cout << "----------------------------" << std::endl << std::endl;

	// CREATION FORM
	ShrubberyCreationForm b("home");
	ShrubberyCreationForm c(b);
	RobotomyRequestForm d("daft");
	RobotomyRequestForm e(d);
	PresidentialPardonForm f("Machiavel");
	PresidentialPardonForm g(f);
	AForm *intern_form;
	

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

try
	{
		intern_form = student.makeForm("presidential pardon", "Staline");
		chris.signForm(*intern_form);
		chris.executeForm(*intern_form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << std::endl;
		std::cout << "----------------------------" << std::endl << std::endl;
		return (1);
	}

	std::cout << std::endl;
	std::cout << "----------------------------" << std::endl << std::endl;
	delete(intern_form);

	return (0);
}
