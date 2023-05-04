/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:44:42 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/03 17:44:51 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("No type") {
}

AMateria::AMateria(std::string const &type) : _type(type) {
}

AMateria::AMateria(AMateria const &toCopy) {
	*this = toCopy;
}

AMateria &AMateria::operator=(AMateria const &toCopy) {
	if (this != &toCopy) {
		this->_type = toCopy._type;
	}
	return *this;
}

AMateria::~AMateria() {
}

std::string const &AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter &target) {
	(void)target;
}
