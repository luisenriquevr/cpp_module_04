/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 00:29:44 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/05 14:29:21 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter {
   private:
    std::string _name;
    AMateria *_inventory[4];

   public:
    Character();
    explicit Character(std::string const &name);
    Character(Character const &toCopy);
    ~Character();

    Character &operator=(Character const &toCopy);

    std::string const & getName() const;

    void equip(AMateria *materia);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};
