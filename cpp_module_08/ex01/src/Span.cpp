/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:10:14 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/22 11:21:43 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.h"

Span::Span(){};

Span::Span(unsigned int N) : N(N)
{
    std::list<int> lst;
   // std::cout << "Constructor of the Span of " << N << " number" << std::endl;
}

Span::Span(const Span &other)
{
    this->N = other.N;
    this->lst = other.lst;
    //std::cout << "Copy of the Span of " << N << " number" << std::endl;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->N = other.N;
        this->lst = other.lst;
    }
    return (*this);
}

Span::~Span()
{
    //std::cout << "Destuctor of the Span" << std::endl;
}

const char *	Span::ToMuchException::what() const throw()
{
	return ("To much number on the Span");
}

const char *	Span::NotEnoughException::what() const throw()
{
	return ("Not enough number on the Span");
}

void    Span::addNumber(const int nbr)
{
    if (lst.size() >= N)
    {
        throw ToMuchException();
        return ;
    }
    lst.push_back(nbr);
}

int    Span::shortestSpan(void)
{
    if (lst.size() <= 1)
        throw NotEnoughException();
    lst.sort();
    std::vector<int> diff(lst.size());
    std::adjacent_difference(lst.begin(), lst.end(), diff.begin());
    diff.erase(diff.begin());
    int min_diff = *std::min_element(diff.begin(), diff.end());
    return (min_diff);
}

int    Span::longestSpan(void)
{
    if (lst.size() <= 1)
        throw NotEnoughException();
    lst.sort();
    std::vector<int> diff(lst.size());
    std::adjacent_difference(lst.begin(), lst.end(), diff.begin());
    diff.erase(diff.begin());
    int min_diff = *std::max_element(diff.begin(), diff.end());
    return (min_diff);
}

void Span::mult_add(unsigned int nbr)
{
    if (nbr > N || nbr > N - lst.size())
    {
        throw ToMuchException();
        return ;
    }
    std::srand(std::time(NULL));
    for(unsigned int i = 0; i < nbr; ++i)
    {
        int random = std::rand();
        lst.push_back(random);
    }
}
