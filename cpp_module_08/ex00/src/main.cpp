/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:30:53 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/21 12:17:27 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"

const char *	NotFindException::what() const throw()
{
	return "Value not fond";
}

template <typename T>
int   easyfind(T const &array, int val)
{
    typename T::const_iterator	it;
	typename T::const_iterator	ite = array.end();

	for (it = array.begin(); it != ite; ++it)
    {
		if (*it == val)
			return (*it);
	}
	throw NotFindException();
}

int main(void)
{
    int result;

    std::list<int> numbers;
    numbers.push_back(10);
    numbers.push_back(9);
    numbers.push_back(8);
    numbers.push_back(7);
    try
    {
        result = easyfind(numbers, 7);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }
    std::cout << "Value found = " << result << std::endl;
    return (0);
}
