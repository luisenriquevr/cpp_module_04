/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:05:54 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/08 17:44:49 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "RGB.hpp"

class Animal {
   protected:
    std::string     _type;

   public:
    Animal();
    explicit Animal(const std::string &type);
    Animal(const Animal &toCopy);
    Animal &operator=(const Animal &toCopy);
    virtual ~Animal();

    virtual const std::string   getType() const;
    virtual void    makeSound() const;
};

std::ostream    &operator<<(std::ostream &COUT, const Animal &Animal);
