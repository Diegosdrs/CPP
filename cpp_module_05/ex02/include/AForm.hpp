/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:12:52 by dsindres          #+#    #+#             */
/*   Updated: 2024/12/03 13:36:52 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat;
//#include "ShrubberyCreationForm.hpp"
//#include "Bureaucrat.hpp"

class AForm
{
	public:
		AForm();
		AForm(std::string const name, std::string target, int const sign, int const exec);
		AForm(const AForm& other);
		AForm& operator=(const AForm &other);
		virtual ~AForm();

		int		getSign() const;
		int		getExec() const;
		bool	getIfitsigned() const;
		std::string	const getName() const;
		std::string	const getTarget() const;
		void	beSigned(const Bureaucrat &other);

		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class FormAlreadySignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class FormNotSignedYetException : public std::exception
		{
			public:
				const char* what() const throw();
		};

	private:
		std::string const	name;
		std::string			target;
		int const			sign;
		int const			exec;
		bool				ifitsigned;
};

std::ostream& operator<<(std::ostream& o, const AForm& other);
