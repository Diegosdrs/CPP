/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:31:36 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/20 10:11:05 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filename.h"

int	main(int ac, char **av)
{
	std::string	sourceFile;
	std::string	line;

	if (ac != 4)
	{
		std::cerr << "Erreur : mauvais nombre d'arguments" << std::endl;
		return (1);
	}
	if (av[2] == NULL || av[3] == NULL || std::string(av[2]).empty())
	{
		std::cerr << "Erreur : mauvais input" << std::endl;
		return (1);
	}
	sourceFile = av[1];
	std::ifstream source(sourceFile.c_str());
	if (!source)
	{
		std::cerr << "Erreur d'ouverture du fichier : " << sourceFile << std::endl;
		return (1);
	}
	std::string destinationFile = sourceFile + ".replace";
	std::ofstream destination(destinationFile.c_str());
	if (!destination)
	{
		std::cerr << "Erreur de creation du fichier : " << destinationFile << std::endl;
		source.close();
		return (1);
	}
	while (std::getline(source, line))
	{
		destination << replace_line(line, av[2], av[3]) << std::endl;
	}
	source.close();
	destination.close();
	source.close();
}

std::string	replace_line(std::string line, std::string s1, std::string s2)
{
	size_t pos = 0;

	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
		pos += s2.length();
	}
	return (line);
}