/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:55:07 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/14 09:36:18 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Scalar.h"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Mauvais nombre d'argument" << std::endl;
        return (1);
    }
    try 
    {
        ScalarConverter::convert(av[1]);
    }
    catch(const std::exception &e)
    {
        std::cerr << "Error : " << e.what() << std::endl;
    }
    return (0);
}
