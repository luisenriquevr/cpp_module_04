/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:50:30 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/02 10:29:34 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal {
   private:
    Brain   *_brain;

   public:
    Dog();
    Dog(const Dog &toCopy);
    Dog &operator=(const Dog &toCopy);
    virtual ~Dog();

    virtual const std::string   getType() const;
    virtual void    makeSound() const;
};

std::ostream    &operator<<(std::ostream &COUT, const Dog &Dog);
