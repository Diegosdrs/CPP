/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsindres <dsindres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:44:07 by dsindres          #+#    #+#             */
/*   Updated: 2025/01/07 16:10:35 by dsindres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.h"

class AMateria
{
    public:
        AMateria();
        AMateria(std::string const &type);
        AMateria(AMateria const &other);
        ~AMateria();
        AMateria &operator=(AMateria const &other);
        std::string const &getType() const;
        
        virtual AMateria* clone() const = 0;
        //virtual void use(ICharacter& target);

    protected :
        std::string type;
};