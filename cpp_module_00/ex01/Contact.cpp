/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:53:13 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/14 09:28:18 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HeaderPhoneBook.hpp"

Contact::Contact(){}

void	Contact::set_name(std::string name)
{
	this->name = name;
}

void	Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void	Contact::set_nick_name(std::string nick_name)
{
	this->nick_name = nick_name;
}

void	Contact::set_num(std::string num)
{
	this->num = num;
}

void	Contact::set_secret(std::string secret)
{
	this->secret = secret;
}

std::string	Contact::get_name()
{
	return (this->name);
}

std::string	Contact::get_last_name()
{
	return (this->last_name);
}

std::string	Contact::get_nick_name()
{
	return (this->nick_name);
}

std::string	Contact::get_num()
{
	return (this->num);
}

std::string	Contact::get_secret()
{
	return (this->secret);
}