/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:05:54 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/24 16:38:56 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "RGB.hpp"

class AAnimal {
   protected:
    std::string     type;

   public:
    AAnimal();
    explicit AAnimal(const std::string &_type);
    AAnimal(const AAnimal &toCopy);
    AAnimal &operator=(const AAnimal &toCopy);
    virtual ~AAnimal();

    const std::string   getType() const;
    virtual void    makeSound() const = 0;
};

std::ostream    &operator<<(std::ostream &COUT, const AAnimal &AAnimal);
