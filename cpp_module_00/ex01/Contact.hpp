/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:53:10 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/14 09:27:16 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include "HeaderPhoneBook.hpp"

class Contact
{
	public:
		Contact();
		void	set_name(std::string name);
		void	set_last_name(std::string last_name);
		void	set_nick_name(std::string nick_name);
		void	set_num(std::string num);
		void	set_secret(std::string secret);

		std::string	get_name();
		std::string	get_last_name();
		std::string	get_nick_name();
		std::string	get_num();
		std::string	get_secret();
		
	private:
		std::string name;
		std::string last_name;
		std::string nick_name;
		std::string num;
		std::string secret;
};

#endif