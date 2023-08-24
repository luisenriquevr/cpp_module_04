/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:19:36 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/24 18:20:00 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "RGB.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(Cure const &toCopy) : AMateria("cure") {
	*this = toCopy;
}

Cure &Cure::operator=(Cure const &toCopy) {
	if (this != &toCopy) {
		this->_type = toCopy.getType();
	}
	return *this;
}

AMateria *Cure::clone() const {
	return new Cure(*this);
}

Cure::~Cure() {
}

void Cure::use(ICharacter &target) {
	std::cout << YELLOW << "* heals " << target.getName() << "’s wounds *" << RESET << std::endl;
}
