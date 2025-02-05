/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:12:52 by dsindres          #+#    #+#             */
/*   Updated: 2024/12/02 14:26:22 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat;
//#include "Bureaucrat.hpp"

class Form
{
	public:
		Form();
		Form(std::string const name, int const sign, int const exec);
		Form(const Form& other);
		Form& operator=(const Form &other);
		~Form();

		int		getSign() const;
		int		getExec() const;
		bool	getIfitsigned() const;
		std::string	const getName() const;
		void	beSigned(const Bureaucrat &other);

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

	private:
		std::string const	name;
		int const			sign;
		int const			exec;
		bool				ifitsigned;
};

std::ostream& operator<<(std::ostream& o, const Form& other);
