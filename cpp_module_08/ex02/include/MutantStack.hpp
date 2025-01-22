/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:28:19 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/22 12:38:04 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Mutant.h"

template< typename T>
class MutantStack : public std::stack<T>
{
    public :
        MutantStack();
        MutantStack(const MutantStack &other);
        MutantStack &operator=(const MutantStack &other);
        ~MutantStack();

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
};

template< typename T>
MutantStack<T>::MutantStack(){}

template< typename T>
MutantStack<T>::MutantStack(const MutantStack &other) : std::stack<T>(other)
{}

template< typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other)
{
    (void)other;
    return (*this);
}

template< typename T>
MutantStack<T>::~MutantStack(){}

