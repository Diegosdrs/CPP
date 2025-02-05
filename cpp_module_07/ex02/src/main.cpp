/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:58:01 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/15 15:23:16 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Header.hpp"
#include "Array.cpp"

int main()
{
  try
  {
    char letter = 'a';
    Array<char> obj(10);
    for (int i = 0; i < 10; i++)
    {
      obj[i] = letter++;
      std::cout << "Index " << i << " = " << obj[i] << std::endl;
    }
    obj[8] = 'a';
    std::cout << obj[8] << std::endl;
    std::cout << "Size of the object is " << obj.size() << std::endl;
  }
  catch (const std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  
    //-----------------------------------------------------------------------
    std::cout << std::endl;
    std::cout << "test 2" << std::endl << std::endl;
    //-----------------------------------------------------------------------


  try
  {
    const int size = 10;
    Array<int> obj(size);
    for (int i = 0; i < size; i++)
    {
      obj[i] = i;
      std::cout << "Index obj1 " << i << " = " << obj[i] << std::endl;
    }
    Array<int> obj2(obj);
    for (int i = 0; i < size; i++)
    {
      std::cout << "Index obj2 " << i << " = " << obj[i] << std::endl;
    }
  }
  catch (const std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }

    //-----------------------------------------------------------------------
    std::cout << std::endl;
    std::cout << "test 3" << std::endl << std::endl;
    //-----------------------------------------------------------------------

  try
  {
    Array<int> obj;
    obj[0] = 5;
    std::cout << obj[0] << std::endl;
  }
  catch (const std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
}
