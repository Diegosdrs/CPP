/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:12:56 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/29 12:15:56 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bitcoin.h"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string filename) : filename(filename)
{
	std::ifstream	data;

	data.open("data.csv", std::ifstream::in);
	this->DataParsing(data);
    this->exchange(filename);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    this->map = other.map;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        this->map = other.map;
    }
    return (*this);
}

BitcoinExchange::~BitcoinExchange()
{}

/* ------------------------------------------------------------------------------ */

std::string BitcoinExchange::new_line(std::string line)
{
    std::size_t pos = line.find(',');

    if (pos != std::string::npos)
        return (line.substr(0, pos));
    return (line);
}

float   BitcoinExchange::new_value(std::string line)
{
    std::size_t pos = line.find(',');

    if (pos != std::string::npos)
    {
        std::string after_comma = line.substr(pos + 1);
        return (std::atof(after_comma.c_str()));
    }
     return (0.0f);
}

void   BitcoinExchange::DataParsing(std::ifstream &data)
{
    std::string line;

    while(std::getline(data, line))
        map[new_line(line)] = new_value(line);
    data.close();
}

void     BitcoinExchange::exchange(std::string filename)
{
    std::string line;
    int interupt = 0;

	std::ifstream source(filename.c_str());
    while(std::getline(source, line))
    {
        if (date_verif(line) == 1)
            interupt++; ;
        if (interupt == 0)
        {
            if (value_verif(line) == 1)
                interupt++;
        }
        if (interupt == 0)
            display_btc(line);
        interupt = 0;
    }
}

int     BitcoinExchange::date_verif(std::string line)
{
    if (line == "date | value")
        return (1);
    std::size_t pos = line.find('|');
    if (pos == std::string::npos)
    {
        std::cout << line << " : not valid format" << std::endl;
        return (1);
    }
    std::string date = line.substr(0, pos);
    if (date.length() != 11 || date[4] != '-' || date[7] != '-' || date[10] != ' ')
    {
        std::cout << date << ": not a valid date" << std::endl;
        return (1);
    }
    if (!isdigit(date[0]) || !isdigit(date[1]) || !isdigit(date[2]) || !isdigit(date[3]) ||
        !isdigit(date[5]) || !isdigit(date[6]) || !isdigit(date[8]) || !isdigit(date[9]))
    {
        std::cout << date << ": not a valid date" << std::endl;
        return (1);
    }
    std::string month = date.substr(5, 2);
    int number = std::atoi(month.c_str());
    if (number <= 0 || number > 12)
    {
        std::cout << date << ": not a valid date" << std::endl;
        return (1);
    }
    std::string day = date.substr(8, 9);
    int number2 = std::atoi(day.c_str());
    if (number2 <= 0 || number2 > 31)
    {
        std::cout << date << ": not a valid date" << std::endl;
        return (1);
    }
    std::string year = std::string(1, date[0]) + std::string(1, date[1]) + std::string(1, date[2]) + std::string(1, date[3]);
    int number3 = std::atoi(year.c_str());
    if (number3 < 2009)
    {
        std::cout << date << ": to old data" << std::endl;
        return (1);
    }
    if (number3 == 2009 && number2 == 1 && number == 1)
    {
        std::cout << date << ": to old data" << std::endl;
        return (1);
    }
    return (0);
}

int     BitcoinExchange::value_verif(std::string line)
{
    std::size_t pos = line.find('|');
    std::string value = line.substr(pos + 1);
    value.erase(0, 1);
    if (value.empty())
    {
        std::cout << line << " : missing value" << std::endl;
        return (1);
    }
    for (std::size_t i = 0; i < value.length(); ++i)
    {
         if ((!std::isdigit(value[i]) && value[i] != '.')
            || (value[0] == '.') || (value[value.length() - 1] == '.'))
         {
            std::cout << line << " : not a valid value" << std::endl;
            return (1);
         }
    }
    float number = std::atof(value.c_str());
    if (number < 0 || number > 1000)
    {
        std::cout << line << " : not a valid value" << std::endl;
        return (1);
    }
    return (0);
}

void    BitcoinExchange::display_btc(std::string line)
{
    std::size_t pos = line.find('|');
    std::string date = line.substr(0, pos);
    std::string value = line.substr(pos + 1);
    value.erase(0, 1);
    date.erase(10, 1);
    mult_float(date, value); 
}

void    BitcoinExchange::mult_float(std::string date, std::string value)
{
    for (std::map<std::string, float>::iterator it = map.begin(); it != map.end(); ++it)
    {
        if (it->first == date) 
        {
            float number = std::atof(value.c_str());
            std::cout << date << " => " << value << " = " << number * it->second << std::endl;
            return ;
        }
    }
    for (std::map<std::string, float>::reverse_iterator it = map.rbegin(); it != map.rend(); ++it)
    {
        if (it->first != "date")
        {
            if (find_date(date, it->first) == 0) 
            {
               float number = std::atof(value.c_str());
               std::cout << date << " => " << value << " = " << number * it->second << std::endl;
               return ;
            }
        }
    }
}

int     BitcoinExchange::find_date(std::string date, std::string map_date)
{
    std::string date_year = std::string(1, date[0]) + std::string(1, date[1]) + std::string(1, date[2]) + std::string(1, date[3]);
    std::string date_map_year = std::string(1, map_date[0]) + std::string(1, map_date[1]) + std::string(1, map_date[2]) + std::string(1, map_date[3]);
    int year = std::atoi(date_year.c_str());
    int map_year = std::atoi(date_map_year.c_str());
    std::string date_month = date.substr(5, 2);
    std::string date_map_month = map_date.substr(5, 2);
    int month = std::atoi(date_month.c_str());
    int map_month = std::atoi(date_map_month.c_str());
    std::string date_day = date.substr(8, 9);
    std::string date_map_day = map_date.substr(8, 9);
    int day = std::atoi(date_day.c_str());
    int map_day = std::atoi(date_map_day.c_str());
    
    if (year >= map_year)
    {
        if (month >= map_month)
        {
            if(day >= map_day)
            {
                return (0);
            }
            else
                return (1);
        }
        else
            return (1);
    }
    else
        return (1);
}
