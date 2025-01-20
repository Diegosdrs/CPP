/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:36:22 by dsindres          #+#    #+#             */
/*   Updated: 2024/12/10 11:45:02 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HeaderPhoneBook.hpp"

PhoneBook::PhoneBook() : index_contact(0), nb_contact(0)
{}

void	PhoneBook::create_contact()
{
	std::string input;

	if (index_contact > 7)
		index_contact = 0;
	std::cout << "Ajouter un contact" << std::endl << std::endl;
	std::cout << "Prenom du contact : ";
	std::cin >> input;
	tab[index_contact].set_name(input);

	std::cout << "Nom du contact : ";
	std::cin >> input;
	tab[index_contact].set_last_name(input);

	std::cout << "Surnom du contact : ";
	std::cin >> input;
	tab[index_contact].set_nick_name(input);

	std::cout << "Numero du contact : ";
	std::cin >> input;
	tab[index_contact].set_num(input);

	std::cout << "Secret du contact : ";
	std::cin >> input;
	tab[index_contact].set_secret(input);

	std::cout << std::endl;
	index_contact++;
	if (nb_contact < 8)
		nb_contact++;
	std::cout << "Contact ajouté !" << std::endl;
}

void	PhoneBook::search_contact()
{
	int			input;
	std::string	input_index;

	if (nb_contact == 0)
	{
		std::cout << "Repertoire vide" << std::endl;
		return ;
	}
	std::cout << "Ton repertoire" << std::endl << std::endl;
	display_tab();
	std::cout << std::endl;
	std::cout << "Entrer index du contact a afficher : ";
	std::cin >> input_index;
	input = string_to_int(input_index);
	while ((input_index != "1" && input_index != "2" && input_index != "3" && input_index != "4"
			&& input_index != "5" && input_index != "6" && input_index != "7" && input_index != "8")
			|| input > nb_contact)
		{
			std::cout << "Contact inexistant, reessayez : ";
			std::cin >> input_index;
			input = string_to_int(input_index);
		}
	std::cout << std::endl;
	std::cout << tab[input - 1].get_name() << std::endl;
	std::cout << tab[input - 1].get_last_name() << std::endl;
	std::cout << tab[input - 1].get_nick_name() << std::endl;
	std::cout << tab[input - 1].get_num() << std::endl;
	std::cout << tab[input - 1].get_secret() << std::endl;
}

std::string int_to_string(int num)
{
	std::ostringstream oss;
	oss << num;
	return (oss.str());
}

int	string_to_int(const std::string& str)
{
	int value;
	std::istringstream(str) >> value;
	return (value);
}

void PhoneBook::display_tab()
{
	int		count;
	int		count_index;

	count = nb_contact;
	count_index = 0;
	std::cout << std::endl;
	while (count > 0)
	{
		good_format(int_to_string(count_index + 1));
		good_format(tab[count_index].get_name());
		good_format(tab[count_index].get_last_name());
		good_format(tab[count_index].get_nick_name());
		std::cout << std::endl;
		count--;
		count_index++;
	}
}

void	PhoneBook::good_format(std::string str)
{
	int	i = 0;
	int	diff = 0;

	if (str.size() <= 10)
	{
		diff = 10 - str.size();
		while (diff > 0)
		{
			std::cout << " ";
			diff--;
		}
		while (str[i])
		{
			std::cout << str[i];
			i++;
		}
	}
	else
	{
		while(i < 9)
		{
			std::cout << str[i];
			i++;
		}
		std::cout << ".";
	}
	std::cout << "|";
}
