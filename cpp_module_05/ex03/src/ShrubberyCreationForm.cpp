/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:41:11 by dsindres          #+#    #+#             */
/*   Updated: 2024/12/03 15:19:10 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery", target, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm("Shrubbery", other.getTarget(), other.getSign(), other.getExec())
{
	std::cout << "Copy constructor of Shrubbery " << other.getTarget() << " created" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other) 
		this->AForm::operator=(other);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor - ShrubberyCreationForm " << this->getTarget() << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->AForm::execute(executor);
	std::string filename = this->getTarget() + "_shrubbery";
	std::ofstream file(filename.c_str(), std::ios::out);
	if (!file.is_open())
	{
		std::cerr << "Cannot open the file " << this->getTarget() << "_shrubbery" << std::endl;
		return ;
	}
	file <<"          🌳" << std::endl;
	file <<"         ###" << std::endl;
	file <<"        #o#o#" << std::endl;
	file <<"       #ooooo#" << std::endl;
	file <<"      ###o#o###" << std::endl;
	file <<"     #o#o###o#o#" << std::endl;
	file <<"    #oooo#o#oooo#" << std::endl;
	file <<"   ###o###o###o###" << std::endl;
	file <<"  #o#o#o#o#o#o#o#o#" << std::endl;
	file <<"       |||||||" << std::endl;
	file <<"       |||||||" << std::endl;
	file <<"       |||||||" << std::endl;
	file.close();
}
