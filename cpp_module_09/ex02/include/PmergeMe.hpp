/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:36:17 by dsindres          #+#    #+#             */
/*   Updated: 2025/02/05 15:03:06 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.h"

class PmergeMe
{
    public :
        PmergeMe();
        PmergeMe(int ac, char **av);
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe();
        
        int     verif_input(char *str);
        
        //vector
        void    vector_sort(char **av);
        void    display_vector(std::vector<int> vec);
        void    display_message(void);
        
        //list
        void    list_sort(char **av);
        
    private :
        int total_nbr;
        
        //vector
        std::vector<int> number;
        std::vector<int> min;
        std::vector<int> max;
        std::vector<int> final;
        double time_vector;

        //list
        std::list<int> list;
        std::list<int> min_list;
        std::list<int> max_list;
        std::list<int> final_list;
        double time_list;
};