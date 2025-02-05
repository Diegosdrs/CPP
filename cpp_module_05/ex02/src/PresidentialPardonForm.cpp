/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:41:11 by dsindres          #+#    #+#             */
/*   Updated: 2024/12/03 14:58:10 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon", target, 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm("Presidential Pardon", other.getTarget(), other.getSign(), other.getExec())
{
	std::cout << "Copy constructor of Presidential Pardon " << other.getTarget() << " created" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other) 
		this->AForm::operator=(other);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor - PresidentialPardonForm " << this->getTarget() << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->AForm::execute(executor);
	std::cout << "Our great President the magnificent Zaphor Beeblebox forgive " << this->getTarget() << " !" << std::endl;
}

