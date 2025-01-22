/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:06:46 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/22 11:22:03 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.h"

int main(void)
{
    Span sp = Span(10000);
    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(19);
        sp.addNumber(10);
        sp.addNumber(10);
        sp.mult_add(8000);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }
    try
    {
        std::cout << "Result of ShortestSpan = " << sp.shortestSpan() << std::endl;
        std::cout << "Result of ShortestSpan = " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }
    
    return (0);
}
