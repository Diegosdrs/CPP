/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:53:58 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/14 10:56:28 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.h"

int main(void)
{
    Data *data = new Data ("lol", 54);
	uintptr_t	raw;

	std::cout << "Adresse de data : " << data << std::endl;

	raw = Serializer::serialize(data);
	std::cout << "Serialize : " << raw << std::endl;

 	data = Serializer::deserialize(raw);
	std::cout << "Deserialize : " << data << std::endl;

	delete data;
    return (0);
}