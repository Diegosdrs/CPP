/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HeaderPhoneBook.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:07:09 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/14 11:45:25 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERPHONEBOOK_HPP
#define HEADERPHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <iomanip>
#include <cstdio>
#include <sstream>

#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string int_to_string(int num);
int	string_to_int(const std::string& str);


#endif