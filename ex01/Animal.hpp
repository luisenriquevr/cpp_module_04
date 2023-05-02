/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:05:54 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/02 20:31:25 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "RGB.hpp"

class Animal {
   protected:
    std::string     type;

   public:
    Animal();
    explicit Animal(const std::string &_type);
    Animal(const Animal &toCopy);
    Animal &operator=(const Animal &toCopy);
    virtual ~Animal();

    const std::string   getType() const;
    virtual void    makeSound() const;
};

std::ostream    &operator<<(std::ostream &COUT, const Animal &Animal);
