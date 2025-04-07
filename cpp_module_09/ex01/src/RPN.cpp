/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:25:27 by dsindres          #+#    #+#             */
/*   Updated: 2025/04/07 10:44:49 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Polish.h"

RPN::RPN(){};

RPN::RPN(std::string str) : str(str)
{
    int		nbr1;
    int		nbr2;
    int		res;
    int		digit = 0;
    int		sign = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            continue;
        if (isdigit(str[i]))
            digit++;
        else if ((str[i]) == '*' || (str[i]) == '/' || (str[i]) == '+' || (str[i]) == '-')
            sign++;
    }
    if (sign != digit - 1)
        throw std::runtime_error("Error syntax : not valid input");

    for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ')
        continue;
    if (isdigit(str[i])) {
        this->stack.push(str[i] - '0');
    }
    else if ((str[i]) == '*' || (str[i]) == '/' || (str[i]) == '+' || (str[i]) == '-') {
        nbr2 = this->stack.top();
        this->stack.pop();
        nbr1 = this->stack.top();
        this->stack.pop();
        switch (str[i]) {
        case '*':
            res = nbr1 * nbr2;
            break;
        case '/':
            res = nbr1 / nbr2;
            break;
        case '+':
            res = nbr1 + nbr2;
            break;
        case '-':
            res = nbr1 - nbr2;
        default:
            break;
        }
        this->stack.push(res);
    }
    else {
        std::cout << "Error." << std::endl; return;
    }
    }
    std::cout << res << std::endl;
}

// RPN::RPN(std::string str) : str(str)
// {
//     int nbr1;
//     int nbr2;
//     int res;
    
//     for (size_t i = 0; i < str.length(); ++i)
//     {
//         if (isdigit(str[i]))
//             stack.push(str[i] - '0');
//         else if (str[i] != ' ')
//         {
//             if (stack.size() < 2)
//             {
//                 std::cerr << "Error: not enough operands for operator '" << str[i] << "'" << std::endl;
//                 return;
//             }
//             nbr2 = this->stack.top();
//             this->stack.pop();
//             nbr1 = this->stack.top();
//             this->stack.pop();
//             if (str[i] == '+')
//                 res = nbr1 + nbr2;
//             else if (str[i] == '-')
//                 res = nbr1 - nbr2;
//             else if (str[i] == '*')
//                 res = nbr1 * nbr2;
//             else if (str[i] == '/')
//             {
//                 if (nbr2 == 0)
//                 {
//                     std::cerr << "Error: division by zero" << std::endl;
//                     return;
//                 }
//                 res = nbr1 / nbr2;
//             }
//             this->stack.push(res);
//         }
//     }
//     std::cout << res << std::endl;
// };

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