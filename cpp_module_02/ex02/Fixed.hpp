/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:12:52 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/07 12:07:59 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.h"


class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		int		getRawBits() const;
		void	setRawBits(int const raw);

		Fixed(const int entier);
		Fixed(const float flottant);
		float	toFloat( void ) const;
		int		toInt( void ) const;

		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		int operator>(const Fixed &other) const;
		int operator<(const Fixed &other) const;
		int operator>=(const Fixed &other) const;
		int operator<=(const Fixed &other) const;
		int operator==(const Fixed &other) const;
		int operator!=(const Fixed &other) const;

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		static Fixed&	min(Fixed &a, Fixed &b);
		static Fixed&	max(Fixed &a, Fixed &b);
		static Fixed const&	min(Fixed const &a, Fixed  const &b);
		static Fixed const&	max(Fixed const &a, Fixed  const &b);

	private:
		int	nbr;
		static const int nbr_bits = 8;
};