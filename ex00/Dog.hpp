/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:50:30 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/08 17:13:10 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal {
   public:
    Dog();
    Dog(const Dog &toCopy);
    Dog &operator=(const Dog &toCopy);
    virtual ~Dog();

    const std::string   getType() const;
    void    makeSound() const;
};

std::ostream    &operator<<(std::ostream &COUT, const Dog &Dog);
