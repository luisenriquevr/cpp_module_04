/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:19:36 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/03 00:27:45 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	//std::cout << "[Cure] Default constructor called" << std::endl;
}

Cure::Cure(Cure const &toCopy) {
	*this = toCopy;
	//std::cout << "[Cure] Copy constructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &toCopy) {
	if (this != &toCopy) {
		this->_type = toCopy._type;
		//std::cout << "[Cure] Assigned constructor called" << std::endl;
	}
	return *this;
}

AMateria *Cure::clone() const {
	return new Cure();
}

Cure::~Cure() {
	//std::cout << "[Cure] Destructor called" << std::endl;
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
