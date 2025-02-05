/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filename.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:36:12 by dsindres          #+#    #+#             */
/*   Updated: 2024/11/20 10:11:40 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILENAME_H
#define FILENAME_H

#include <iostream>
#include <cctype>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <iomanip>
#include <cstdio>
#include <sstream>
#include <fstream>

// Main.cpp
std::string	replace_line(std::string line, std::string s1, std::string s2);

#endif