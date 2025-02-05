/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:38:12 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/14 10:27:17 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Serializer.h"

class Data
{
    public :
        Data();
        Data(std::string name, int value);
        ~Data();
        Data(const Data &other);
        Data& operator=(const Data &other);
        
    private :
        std::string name;
        int         value;
};
