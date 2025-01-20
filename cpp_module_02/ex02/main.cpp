/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:13:59 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/06 16:00:34 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int main( void )
{
	Fixed a;
	Fixed e(40);
	Fixed const b( 35 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 14562.41f );

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	if (c < b)
		std::cout << "c < b" << std::endl;
	else
		std::cout << "c > b" << std::endl;
	if (b == d)
		std::cout << "b = d" << std::endl;
	else
		std::cout << "b != d" << std::endl;
	std::cout << " + : " << (b + d) << std::endl;
	std::cout << " - : " << (b - d) << std::endl;
	std::cout << " * : " << (b * d) << std::endl;
	std::cout << " / : " << (b / d) << std::endl;
	std::cout << e << " " << ++e << " " << --e << std::endl;
	std::cout << Fixed::min(b, c) << std::endl;
	std::cout << Fixed::max(b, c) << std::endl;
	return 0;
}

/* int main( void )
{
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
} */