/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:38:06 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/08 19:17:37 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
   private:
    Brain   *_brain;

   public:
    Cat();
    Cat(const Cat &toCopy);
    Cat &operator=(const Cat &toCopy);
    virtual ~Cat();

    const std::string   getType() const;
    void    makeSound() const;
	Brain   *getBrain( void ) const;
};

std::ostream    &operator<<(std::ostream &COUT, const Cat &Cat);
