/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:19:40 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/24 18:20:39 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "RGB.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(Ice const &toCopy) : AMateria("ice") {
	*this = toCopy;
}

Ice &Ice::operator=(Ice const &toCopy) {
	if (this != &toCopy) {
		this->_type = toCopy._type;
	}
	return *this;
}

AMateria *Ice::clone() const {
	return new Ice(*this);
}

Ice::~Ice() {
}

void Ice::use(ICharacter &target) {
	std::cout << BLUE << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}
