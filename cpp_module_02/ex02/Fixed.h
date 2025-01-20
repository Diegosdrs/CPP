/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:36:12 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/21 13:23:07 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

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

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);


#endif