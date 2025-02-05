/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:41:11 by dsindres          #+#    #+#             */
/*   Updated: 2024/12/03 14:49:10 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"
//#include "../include/ShrubberyCreationForm.hpp"

AForm::AForm() : sign(1), exec(1)
{}

AForm::AForm(std::string const name, std::string target, int const sign, int const exec) : name(name), target(target), sign(sign), exec(exec), ifitsigned(false)
{
	if (sign > 150 || exec > 150)
		throw AForm::GradeTooLowException();
	else if (sign < 1 || exec < 1)
		throw AForm::GradeTooHighException();
	else
		std::cout << "Constructor - AForm " << name << ", sign grade " << sign  << ", exec grade " << exec  << " must be signed" << std::endl;
}

AForm::AForm(const AForm& other) : name(other.name), sign(other.sign), exec(other.exec), ifitsigned(other.ifitsigned)
{
	std::cout << "Copy constructor of " << other.name << ", sign grade " << other.sign << ", exec grade " << other.exec << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other) 
	{
		this->ifitsigned = other.getIfitsigned();
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Destructor - AForm " << name << std::endl;
}

std::string	const AForm::getName() const
{
	return (this->name);
}

std::string	const AForm::getTarget() const
{
	return (this->target);
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Form too low");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Form too high");
}

const char *AForm::FormAlreadySignedException::what() const throw()
{
	return ("Form already signed");
}

const char *AForm::FormNotSignedYetException::what() const throw()
{
	return ("Form not signed yet");
}

int	AForm::getSign() const
{
	return (this->sign);
}

int	AForm::getExec() const
{
	return (this->exec);
}

bool AForm::getIfitsigned() const
{
	return (this->ifitsigned);
}

void	AForm::beSigned(const Bureaucrat &other)
{
	if (this->getIfitsigned() == false)
	{
		if (other.getGrade() <= this->getSign())
			ifitsigned = true;
		else
			throw AForm::GradeTooLowException();
	}
	else
		throw AForm::FormAlreadySignedException();
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (this->getIfitsigned() == false)
		throw AForm::FormNotSignedYetException();
	else if (executor.getGrade() > this->getExec())
		throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& o, const AForm& other)
{
	if ( other.getIfitsigned() == false)
		o << "Form " << other.getName() << ", sign grade " << other.getSign() << ", exec grade " << other.getExec() << " is not signed";
	else
		o << "Form " << other.getName() << ", sign grade " << other.getSign() << ", exec grade " << other.getExec() << " is already signed";
	return (o);
}
