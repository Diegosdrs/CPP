/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:11:53 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/15 09:13:44 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Start.hpp"

template< typename T>
T   min(T const &a, T const &b)
{
    if (a < b)
        return (a);
    else if (b < a)
        return (b);
    else
        return (b);
}

template< typename T>
T   max(T const &a, T const &b)
{
    if (a < b)
        return (b);
    else if (b < a)
        return (a);
    else
        return (b);
}

template< typename T>
void   swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}


/* int main(void)
{
    int a = 22;
    int b = 66;

    
    std::cout << "Min = " << min<int>(a, b) << std::endl;
    std::cout << "Max = " << max<int>(a, b) << std::endl;
    
    std::cout << "Max = " << max<float>(12.06f, 45.0222f) << std::endl;

    swap<int>(a, b);
    std::cout << "Swap : a = " << a << " et b = " << b << std::endl;
    return (0);
} */

int main(void)
{
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}