/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:34:30 by dsindres          #+#    #+#             */
/*   Updated: 2025/04/02 12:23:25 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Mutant.h"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top = " << mstack.top() << std::endl;
    std::cout << "size = " << mstack.size() << std::endl;
    mstack.pop();
    std::cout << "size after pop = " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(15);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    return 0;
}    






























// std::stack<int> s(mstack);  // Copie mstack dans un std::stack
    // MutantStack<int> copyStack(mstack);  // Copie mstack dans un autre MutantStack
    
    // std::cout << "Iteration over copyStack (should match mstack):" << std::endl;
    // MutantStack<int>::iterator ito = copyStack.begin();
    // MutantStack<int>::iterator iteo = copyStack.end();
    // while (ito != iteo)
    // {
    //     std::cout << *ito << std::endl;
    //     ++ito;
    // }