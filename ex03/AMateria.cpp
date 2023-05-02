/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:44:42 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/03 00:17:24 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("No type") {
	//std::cout << "[AMateria] Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
	//std::cout << "[AMateria] Type constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &toCopy) {
	*this = toCopy;
	//std::cout << "[AMateria] Copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &toCopy) {
	if (this != &toCopy) {
		this->_type = toCopy._type;
		//std::cout << "[AMateria] Assigned constructor called" << std::endl;
	}
	return *this;
}

AMateria::~AMateria() {
	//std::cout << "[AMateria] Destructor called" << std::endl;
}

std::string const &AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter &target) {
	(void)target;
}
