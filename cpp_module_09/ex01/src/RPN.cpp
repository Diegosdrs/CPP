/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:25:27 by dsindres          #+#    #+#             */
/*   Updated: 2025/02/05 09:15:25 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Polish.h"

RPN::RPN(){};

RPN::RPN(std::string str) : str(str)
{
    int nbr1;
    int nbr2;
    int res;
    
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (isdigit(str[i]))
            stack.push(str[i] - '0');
        else if (str[i] != ' ')
        {
            nbr2 = this->stack.top();
            this->stack.pop();
            nbr1 = this->stack.top();
            this->stack.pop();
            if (str[i] == '+')
                res = nbr1 + nbr2;
            else if (str[i] == '-')
                res = nbr1 - nbr2;
            else if (str[i] == '*')
                res = nbr1 * nbr2;
            else if (str[i] == '/')
                res = nbr1 / nbr2;
            this->stack.push(res);
        }
    }
    std::cout << res << std::endl;
};
RPN::RPN(const RPN &other)
{
    this->str = other.str;
    this->stack = other.stack;
}

RPN &RPN::operator=(const RPN &other)
{
    if (this != &other)
    {
        this->str = other.str;
        this->stack = other.stack;
    }
    return (*this);
}

RPN::~RPN(){}