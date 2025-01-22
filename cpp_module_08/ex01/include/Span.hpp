/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:27:03 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/22 11:19:34 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include  "Span.h"

class Span
{
    public :
        Span();
        Span(unsigned int N);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();
        
        void addNumber(const int nbr);
        int shortestSpan();
        int longestSpan();
        void mult_add(unsigned int nbr);

        class ToMuchException : public std::exception
        {
            public :
                const char* what() const throw();
        };
        
        class NotEnoughException : public std::exception
        {
            public :
                const char* what() const throw();
        };
        
    private :
        unsigned int N;
        std::list<int>   lst;
};