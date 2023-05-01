/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:38:06 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/01 10:53:46 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal {
   public:
    WrongCat();
    WrongCat(const WrongCat &toCopy);
    WrongCat &operator=(const WrongCat &toCopy);
    virtual ~WrongCat();

    const std::string   getType() const;
    void    makeSound() const;
};

std::ostream &operator<<(std::ostream &COUT, const WrongCat &WrongCat);
