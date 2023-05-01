/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:38:06 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/01 10:54:01 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "WrongAnimal.hpp"

class WrongDog : virtual public WrongAnimal {
   public:
    WrongDog();
    WrongDog(const WrongDog &toCopy);
    WrongDog &operator=(const WrongDog &toCopy);
    virtual ~WrongDog();

    const std::string   getType() const;
    void    makeSound() const;
};

std::ostream &operator<<(std::ostream &COUT, const WrongDog &WrongDog);
