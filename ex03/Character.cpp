/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 00:29:32 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/24 18:19:24 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RGB.hpp"

Character::Character() : _name("No name"), _inventory() {
	for (unsigned short int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	std::cout << GREEN << "Character " << this->_name << " created." << RESET << std::endl;
}

Character::Character(std::string const &name) : _name(name), _inventory() {
	for (unsigned short int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	std::cout << GREEN << "Character " << this->_name << " created." << RESET << std::endl;
}

Character::Character(Character const &toCopy) {
	this->_name = toCopy._name;
	for (unsigned short int i = 0; i < 4; i++) {
		this->_inventory[i] = toCopy._inventory[i];
	}
	*this = toCopy;
}

Character &Character::operator=(Character const &toCopy) {
	if (this != &toCopy) {
		this->_name = toCopy._name;
		for (unsigned short int i = 0; i < 4; i++) {
			(this->_inventory[i] == NULL) ? this->_inventory[i] = toCopy._inventory[i]->clone() : NULL; // También se puede utilizar this->equip() en vez de clone()
		}
	}
	return *this;
}

std::string const &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *materia) {
	if (materia) {
		for (unsigned short int i = 0; i < 4; i++) {
			if (!this->_inventory[i]) {
    			this->_inventory[i] = materia;
				std::cout << GREEN << this->getName() << " equipped with " << materia->getType() << RESET << std::endl;
    			break;
			}
		}
	}
}

void Character::unequip(int idx) {
	(idx >= 0 && idx <= 3) ? this->_inventory[idx] = NULL : NULL;
}

void Character::use(int idx, ICharacter &target) {
	(idx >= 0 && idx <= 3 && this->_inventory[idx]) ? this->_inventory[idx]->use(target) : void();
}

Character::~Character() {
	for (unsigned short int i = 0; i < 4; i++) {
		if (this->_inventory[i]) {
			delete this->_inventory[i];
		}
	}
}
