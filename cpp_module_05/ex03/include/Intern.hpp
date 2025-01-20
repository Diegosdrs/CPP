/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:12:52 by dsindres          #+#    #+#             */
/*   Updated: 2024/12/04 11:22:48 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern &other);
		~Intern();

		AForm *makeForm(std::string name, std::string target);

		class BadFormException: public std::exception
		{
			public:
				const char* what() const throw();
		};

	private :
		AForm *makeshrubbery(std::string &target);
		AForm *makerobotomy(std::string &target);
		AForm *makepresident(std::string &target);
};
