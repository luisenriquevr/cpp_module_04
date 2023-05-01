/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:05:54 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/01 15:04:16 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "RGB.hpp"

class WrongAnimal {
   protected:
    std::string     type;

   public:
    WrongAnimal();
    explicit WrongAnimal(const std::string &_type);
    WrongAnimal(const WrongAnimal &toCopy);
    WrongAnimal &operator=(const WrongAnimal &toCopy);
    virtual ~WrongAnimal();

    const std::string   getType() const;
    void    makeSound() const;
};

std::ostream    &operator<<(std::ostream &COUT, const WrongAnimal &WrongAnimal);
