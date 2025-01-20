/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:12:52 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/21 14:26:09 by dsindres         ###   ########.fr       */
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
		
	private:
		int	nbr;
		static const int nbr_bits = 8;
};