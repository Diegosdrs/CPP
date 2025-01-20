/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:37:41 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/14 09:51:16 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "HeaderPhoneBook.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void create_contact();
		void search_contact();
		void display_tab();
		void good_format(std::string);

	private:
		Contact	tab[8];
		int		index_contact;
		int		nb_contact;
};

#endif