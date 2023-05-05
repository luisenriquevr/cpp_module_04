/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:09:42 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/05 14:35:47 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
   protected:
    std::string	_type;

   public:
    AMateria();
    explicit AMateria(std::string const &type);
    AMateria(AMateria const &toCopy);
    virtual ~AMateria();

    AMateria &operator=(AMateria const &toCopy);

    std::string const &getType() const; //Returns the materia type

    virtual AMateria *clone() const = 0;	
    virtual void use(ICharacter &target);
};
