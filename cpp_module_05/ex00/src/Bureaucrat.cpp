/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:41:11 by dsindres          #+#    #+#             */
/*   Updated: 2024/12/02 09:50:42 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.h"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = grade;
	std::cout << "Constructor - Bureaucrat " << name << ", grade " << grade << " arrive in the office" << std::endl;

}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{
	std::cout << "Copy constructor of " << other.name << ", grade " << other.grade << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other) 
	{
		//this->name = other.name;
		this->grade = other.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor - Bureaucrat " << name << ", grade " << grade << " leave the office" << std::endl;
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string	const Bureaucrat::getName() const
{
	return (this->name);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("A Bureaucrat canno't have grade greater than 1");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("A Bureaucrat canno't have grade lower than 150");
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& other)
{
	o << other.getName() << ", bureaucrat grade " << other.getGrade();
	return (o);
}

void	Bureaucrat::incremente()
{
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade--;
}

void	Bureaucrat::decremente()
{
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade++;
}