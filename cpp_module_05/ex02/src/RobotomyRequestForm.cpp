/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:41:11 by dsindres          #+#    #+#             */
/*   Updated: 2024/12/03 14:48:46 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy", target, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm("Robotomy", other.getTarget(), other.getSign(), other.getExec())
{
	std::cout << "Copy constructor of Robotomy " << other.getTarget() << " created" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other) 
		this->AForm::operator=(other);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor - RobotomyRequestForm " << this->getTarget() << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int sucess;

	this->AForm::execute(executor);
	std::cout << "$@#$@#$@#@$@#$@#@$#@$#@$#$@#$------ Robotomisation loading..." << std::endl;
	srand(time(NULL));
	sucess = rand() % 2;

	if (sucess)
		std::cout << this->getTarget() << " has been Robotomise !" << std::endl;
	else
		std::cout << "Robotomisation didn't work, " << this->getTarget() << " is safe !" << std::endl;
}
