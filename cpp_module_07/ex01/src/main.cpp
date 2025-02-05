/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 09:30:39 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/15 10:29:14 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Iter.hpp"

template< typename T>
void justprint(T& a)
{
    std::cout << a << std::endl;
}

template< typename T>
void    Iter(T* a, size_t len, void (*func)(T&))
{
    for(size_t count = 0; count < len; count++)
        func(a[count]);
}

int main(void)
{
    std::string arr[3] = {"Hello", "World", "C++"};
    Iter(arr, 3, justprint<std::string>);

    int tab[4] = {1, 345, 6654, 2234};
    Iter(tab, 4, justprint<int>);
    
    return (0);
}
