/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:25:09 by dsindres          #+#    #+#             */
/*   Updated: 2025/02/05 09:11:41 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polish.h"

class RPN
{
    public :
        RPN();
        RPN(std::string str);
        RPN(const RPN &other);
        RPN &operator=(const RPN &other);
        ~RPN();

    private :
        std::stack<int> stack;
        std::string str;
    
};