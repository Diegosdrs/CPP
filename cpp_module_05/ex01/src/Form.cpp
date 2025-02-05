/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:41:11 by dsindres          #+#    #+#             */
/*   Updated: 2024/12/02 14:26:57 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

Form::Form() : sign(1), exec(1)
{}

Form::Form(std::string const name, int const sign, int const exec) : name(name), sign(sign), exec(exec), ifitsigned(false)
{
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	else if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	else
		std::cout << "Constructor - Form " << name << ", sign grade " << sign << " must be signed" << std::endl;
}

Form::Form(const Form& other) : name(other.name), sign(other.sign), exec(other.exec), ifitsigned(other.ifitsigned)
{
	std::cout << "Copy constructor of " << other.name << ", sign grade " << other.sign << std::endl;
}

Form &Form::operator=(const Form &other)
{
	if (this != &other) 
	{
		this->ifitsigned = other.getIfitsigned();
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Destructor - Form " << name << std::endl;
}

std::string	const Form::getName() const
{
	return (this->name);
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Form too low");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Form too high");
}

const char *Form::FormAlreadySignedException::what() const throw()
{
	return ("Form already signed");
}

int	Form::getSign() const
{
	return (this->sign);
}

int	Form::getExec() const
{
	return (this->exec);
}

bool Form::getIfitsigned() const
{
	return (this->ifitsigned);
}

void	Form::beSigned(const Bureaucrat &other)
{
	if (this->getIfitsigned() == false)
	{
		if (other.getGrade() <= this->getSign())
			ifitsigned = true;
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::FormAlreadySignedException();
}

std::ostream& operator<<(std::ostream& o, const Form& other)
{
	if ( other.getIfitsigned() == false)
		o << "Form " << other.getName() << ", sign grade " << other.getSign() << ", exec grade " << other.getExec() << " is not signed";
	else
		o << "Form " << other.getName() << ", sign grade " << other.getSign() << ", exec grade " << other.getExec() << " is already signed";
	return (o);
}

