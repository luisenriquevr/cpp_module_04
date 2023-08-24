/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:44:42 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/24 18:17:52 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "RGB.hpp"

AMateria::AMateria() : _type("No type") {
}

AMateria::AMateria(std::string const &type) : _type(type) {
    std::cout << RED << "AMateria of type " << this->_type << " created" << RESET << std::endl;
}

AMateria::AMateria(AMateria const &toCopy) {
    *this = toCopy;
}

AMateria &AMateria::operator=(AMateria const &toCopy) {
    if (this != &toCopy) {
        this->_type = toCopy.getType();
    }
    return *this;
}

AMateria::~AMateria() {
    std::cout << RED << "AMateria of type " << this->_type << " destroyed" << RESET << std::endl;
}

std::string const &AMateria::getType() const {
    return this->_type;
}

void AMateria::use(ICharacter &target) {
	std::cout << RED << "AMateria of type " << this->getType() << " used on " << target.getName() << RESET << std::endl;
}
