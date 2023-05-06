/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:19:36 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/06 16:35:22 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(Cure const &toCopy) : AMateria(toCopy._type) {
	*this = toCopy;
}

Cure &Cure::operator=(Cure const &toCopy) {
	if (this != &toCopy) {
		this->_type = toCopy._type;
	}
	return *this;
}

AMateria *Cure::clone() const {
	return new Cure(*this);
}

Cure::~Cure() {
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
