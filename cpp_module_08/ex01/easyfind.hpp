/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:36:12 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/21 12:13:40 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP    
#define EASYFIND_HPP  

#include <iostream>
#include <cctype>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <iomanip>
#include <cstdio>
#include <sstream>
#include <fstream>
#include <math.h>
#include <limits>
#include <cmath>
#include <stdint.h>
#include <stdexcept>
#include <vector>
#include <list>

class NotFindException : public std::exception
{
	public:
		virtual const char *	what() const throw();
};

template <typename T>
int   easyfind(T const &array, int val);
/* {
    typename T::const_iterator	it;
	typename T::const_iterator	ite = array.end();

	for (it = array.begin(); it != ite; ++it)
    {
		if (*it == val)
			return (*it);
	}
	throw NotFindException();
} */

#endif