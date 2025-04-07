/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:10:14 by dsindres          #+#    #+#             */
/*   Updated: 2025/04/02 11:13:42 by dsindres         ###   ########.fr       */
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

int Span::shortestSpan()
{
    if (lst.size() <= 1)
        throw NotEnoughException();

    lst.sort();
    int min_diff = std::numeric_limits<int>::max();

    std::list<int>::iterator prev = lst.begin();
    std::list<int>::iterator it = prev;
    ++it;

    while (it != lst.end())
    {
        int diff = *it - *prev;
        if (diff < min_diff)
            min_diff = diff;
        ++prev;
        ++it;
    }

    return min_diff;
}

int Span::longestSpan()
{
    if (lst.size() <= 1)
        throw NotEnoughException();

    int min_value = *std::min_element(lst.begin(), lst.end());
    int max_value = *std::max_element(lst.begin(), lst.end());

    return max_value - min_value;
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
