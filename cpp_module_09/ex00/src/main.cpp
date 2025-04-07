/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:13:15 by dsindres          #+#    #+#             */
/*   Updated: 2025/04/07 09:25:04 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bitcoin.h"

int verif_file(char *file)
{
    std::string	sourceFile;
    
    if (std::string(file).empty())
        return (1);
    sourceFile = file;
	std::ifstream source(sourceFile.c_str());
	if (!source)
        return (1);
    source.seekg(0, std::ios::end);
    if (source.tellg() == 0)
        return 1;
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Mauvais nombre d'argument" << std::endl;
        return (1);
    }
    if (verif_file(av[1]) == 1)
    {
        std::cerr << "Fichier invalide" << std::endl;
        return (1);
    }
    std::string filename = av[1];
    BitcoinExchange btc(filename);
    //BitcoinExchange *btc = new BitcoinExchange(filename);
    //delete(btc);
    return (0);
}
