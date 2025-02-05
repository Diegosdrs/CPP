/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:38:12 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/14 10:49:10 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Serializer.h"

class Serializer
{
    public :
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

    private :
        Serializer();
        ~Serializer();
        Serializer(const Serializer &other);
        Serializer& operator=(const Serializer &other);
};
