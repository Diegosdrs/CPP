/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:36:17 by dsindres          #+#    #+#             */
/*   Updated: 2025/02/05 15:14:49 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.h"

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cerr << "Mauvais nombre d'argument" << std::endl;
        return (1);
    }
    PmergeMe *a = new PmergeMe(ac, av);
    delete (a);
    return (0);
}
