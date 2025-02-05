/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:12:15 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/29 12:04:15 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bitcoin.h"

class BitcoinExchange
{
    public :
        BitcoinExchange();
        BitcoinExchange(std::string filename);
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();

    private :
        std::string filename;
        std::map<std::string, float> map;
        
        void    DataParsing(std::ifstream &data); 
        std::string new_line(std::string line);
        float   new_value(std::string line);
        void    exchange(std::string filename);
        int     date_verif(std::string line);
        int     value_verif(std::string line);
        void    display_btc(std::string line);
        void   mult_float(std::string date, std::string value);
        int    find_date(std::string date, std::string map_date);
        
};