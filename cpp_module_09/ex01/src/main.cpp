/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:25:44 by dsindres          #+#    #+#             */
/*   Updated: 2025/02/05 09:01:19 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Polish.h"

int     input_verif(char *str)
{
    std::string input = str;
    if (!isdigit(input[0])) 
        return (1);
    for (size_t i = 0; i < input.length(); i++)
    {
        if (!isdigit(input[i]) && input[i] != ' ' && input[i] != '*' && input[i] != '/' && input[i] != '-' && input[i] != '+')
            return (1);
        if (i != input.length() - 1)
        {
            if (input[i] != ' ' && input[i + 1] != ' ')
                return (1);
            if (!isdigit(input[i]) && input[i] != ' ' && !isdigit(input[i + 2]))
                return (1);
        }
    }
    if (input[input.length() - 1] != '+' && input[input.length() - 1] != '-' && input[input.length() - 1] != '*' && input[input.length() - 1] != '/')
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Mauvais nombre d'argument" << std::endl;
        return (1);
    }
    if (input_verif(av[1]) == 1)
    {
        std::cerr << "Bad input" << std::endl;
        return (1);
    }
    std::string str = av[1];
    RPN *calcul = new RPN(str);
    delete (calcul);
    return (0);
}
