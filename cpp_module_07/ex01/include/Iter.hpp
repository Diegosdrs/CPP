/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:36:12 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/15 10:29:07 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

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

template< typename T>
void    Iter(T* a, size_t len, void (*func)(T&));

template< typename T>
void    justprint(T& a);

#endif