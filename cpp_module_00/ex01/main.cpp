/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:30:53 by dsindres          #+#    #+#             */
/*   Updated: 2024/12/10 11:54:42 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HeaderPhoneBook.hpp"

/* int main()
{
	PhoneBook PhoneBook;
	std::string input;

	std::system("clear");
	std::cout << "Welcome to your PhoneBook !" << std::endl << std::endl;
	std::cout << "~ ";
	std::getline(std::cin, input);
	while(std::cin.eof() || input != "EXIT")
	{
		//std::cout << "~ ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << std::endl;
			PhoneBook.create_contact();
		}
		else if (input == "SEARCH")
		{
			std::cout << std::endl;
			PhoneBook.search_contact();
		}
		std::cout << std::endl;
	}
	return (0);
} */

int main()
{
	PhoneBook PhoneBook;
	std::string input;

	std::system("clear");
	std::cout << "Welcome to your PhoneBook !" << std::endl << std::endl;
	std::cout << "~ ";
	while(!std::cin.eof() && std::getline(std::cin, input))
	{
		std::cout << "~ ";
		//std::getline(std::cin, input);
		//if (std::cin.eof())
		//	return (0);
		//std::cin.fail();
		//if (input.empty())
		//	continue ;
		if (input == "ADD")
		{
			std::cout << std::endl;
			PhoneBook.create_contact();
		}
		else if (input == "SEARCH")
		{
			std::cout << std::endl;
			PhoneBook.search_contact();
		}
		else if (input == "EXIT")
		{
			std::cout << std::endl;
			std::cout << "A la prochaine !" << std::endl;
			sleep(1);
			return(0);
		}
	}
	return (0);
}