/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:19:40 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/05 17:25:33 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(Ice const &toCopy) {
	*this = toCopy;
}

Ice &Ice::operator=(Ice const &toCopy) {
	if (this != &toCopy) {
		this->_type = toCopy._type;
	}
	return *this;
}

AMateria *Ice::clone() const {
	return new Ice();
}

Ice::~Ice() {
	delete this;
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
