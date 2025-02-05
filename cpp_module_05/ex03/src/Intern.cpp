/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:41:11 by dsindres          #+#    #+#             */
/*   Updated: 2024/12/04 11:30:41 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Constructor - An intern arrive to help bureaucrat or do coffee" << std::endl;
}

Intern::Intern(const Intern& other)
{
	std::cout << "Copy constructor - Another intern arrive" << std::endl;
	*this = other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Destructor - The intern leave the office" << std::endl;
}

AForm *Intern::makepresident(std::string &target)
{
	AForm *form = new PresidentialPardonForm(target);
	return (form);
}

AForm *Intern::makerobotomy(std::string &target)
{
	AForm *form = new RobotomyRequestForm(target);
	return (form);
}

AForm *Intern::makeshrubbery(std::string &target)
{
	AForm *form = new ShrubberyCreationForm(target);
	return (form);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	AForm *fonction = NULL;
	AForm	*(Intern::*ptr[3])(std::string &target) = {&Intern::makeshrubbery, &Intern::makerobotomy, &Intern::makepresident};
	std::string tabform[3] = {"shrubbery creation" , "robotomy request", "presidential pardon"};

	while (i < 3)
	{
		if (tabform[i] == name)
		{
			fonction = (this->*ptr[i])(target);
			std::cout << "An intern create " << name << " form" << std::endl;
			return (fonction);
		}
		i++;
	}
	std::cout << "An intern cant create " << name << " form because ";
	throw Intern::BadFormException();
	return (NULL);
}

const char *Intern::BadFormException::what() const throw()
{
	return ("invalid form name");
}
