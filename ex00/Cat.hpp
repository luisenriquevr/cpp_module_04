/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:38:06 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/08 17:07:45 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Animal.hpp"

class Cat : public Animal {
   public:
    Cat();
    Cat(const Cat &toCopy);
    Cat &operator=(const Cat &toCopy);
    virtual ~Cat();

    const std::string   getType() const;
    void    makeSound() const;
};

std::ostream    &operator<<(std::ostream &COUT, const Cat &Cat);
