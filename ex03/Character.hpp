/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 00:29:44 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/03 00:43:02 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character {
   private:
    std::string const _name;
	AMateria *_inventory[4];

   public:
    Character();
	explicit Character(std::string const &type);
	Character(Character const &toCopy);
	~Character();

	void equip(AMateria *materia);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};
