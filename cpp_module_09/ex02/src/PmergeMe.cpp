/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:36:17 by dsindres          #+#    #+#             */
/*   Updated: 2025/02/05 15:12:10 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.h"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(int ac, char **av)
{
    this->total_nbr = ac - 1;
    this->vector_sort(av);
    this->list_sort(av);
    display_message();
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
    this->total_nbr = other.total_nbr;
    this->number = other.number;
    this->min = other.min;
    this->max = other.max;
    this->final = other.final;
    this->time_vector = other.time_vector;
    this->list = other.list;
    this->min_list = other.min_list;
    this->max_list = other.max_list;
    this->final_list = other.final_list;
    this->time_list = other.time_list;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
    {
        this->total_nbr = other.total_nbr;
        this->number = other.number;
        this->min = other.min;
        this->max = other.max;
        this->final = other.final;
        this->time_vector = other.time_vector;
        this->list = other.list;
        this->min_list = other.min_list;
        this->max_list = other.max_list;
        this->final_list = other.final_list;
        this->time_list = other.time_list;
    }
    return (*this);
}

PmergeMe::~PmergeMe(){}

//----------------------------- VECTOR -----------------------------------------

int PmergeMe::verif_input(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        if (!isdigit(str[i]))
            return (1);
    }
    return (0);
}

void PmergeMe::display_vector(std::vector<int> vec)
{
    for (size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
}

void    PmergeMe::display_message(void)
{
    std::cout << "Before : ";
    display_vector(this->number);
    std::cout << std::endl;
    std::cout << "After : ";
    display_vector(this->final); 
    std::cout << std::endl;
    std::cout << "Time to process of " << this->total_nbr << " elements with std::vector : " << this->time_vector << std::endl;
    std::cout << "Time to process of " << this->total_nbr << " elements with std::list : " << this->time_list << std::endl;
}

void   PmergeMe::vector_sort(char **av)
{
    std::clock_t start = std::clock();
    for (int i = 1; av[i]; i++)
    {
        if (verif_input(av[i]) == 1)
        {
            std::cerr << "Error : bad input" << std::endl;
            return ;
        }
        long num = std::atol(av[i]);
        if (num < 0 || num > INT_MAX)
        {
            std::cerr << "Error : bad input" << std::endl;
            return ;
        }
        number.push_back(static_cast<int>(num));
    }
    for (size_t j = 0; j < number.size(); j+=2)
    {
        if (j + 1 < number.size())
        {
            int num1 = number[j];
            int num2 = number[j + 1];
            if (num1 < num2)
            {
                min.push_back(num1);
                max.push_back(num2);
            }
            else
            {
                min.push_back(num2);
                max.push_back(num1);
            }
        }
        else
            min.push_back(number[j]);
    }
    std::sort(min.begin(), min.end());
    std::sort(max.begin(), max.end());
    size_t i = 0;
    size_t j = 0;
    while (i < min.size() && j < max.size())
    {
        if (min[i] < max[j])
        {
            final.push_back(min[i]);
            ++i;
        }
        else
        {
            final.push_back(max[j]);
            ++j;
        }
    }
    while (i < min.size())
    {
        final.push_back(min[i]);
        ++i;
    }
    while (j < max.size())
    {
        final.push_back(max[j]);
        ++j;
    }
    std::clock_t end = std::clock();
    double duration = (end - start) * 1000.0 / (double)CLOCKS_PER_SEC;
    time_vector = duration;
}

//----------------------------- LIST -----------------------------------------

void   PmergeMe::list_sort(char **av)
{
    std::clock_t start = std::clock();
    for (int i = 1; av[i]; i++)
    {
        if (verif_input(av[i]) == 1)
        {
            std::cerr << "Error : bad input" << std::endl;
            return ;
        }
        long num = std::atol(av[i]);
        if (num < 0 || num > INT_MAX)
        {
            std::cerr << "Error : bad input" << std::endl;
            return ;
        }
       list.push_back(static_cast<int>(num));
    }
    std::list<int>::iterator it = list.begin();
    while (it != list.end())
    {
        int num1 = *it;
        ++it;
        if (it != list.end())
        {
            int num2 = *it;
            ++it;
            if (num1 < num2)
            {
                min_list.push_back(num1);
                max_list.push_back(num2);
            }
            else
            {
                min_list.push_back(num2);
                max_list.push_back(num1);
            }
        }
        else
            min_list.push_back(num1);
    }
    min_list.sort();
    max_list.sort();
    min_list.merge(max_list);
    final_list = min_list;
    std::clock_t end = std::clock();
    double duration = (end - start) * 1000.0 / (double)CLOCKS_PER_SEC;
    time_list = duration;
}
