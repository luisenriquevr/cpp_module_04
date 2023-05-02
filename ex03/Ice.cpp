/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:19:40 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/03 00:25:59 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	//std::cout << "[Ice] Default constructor called" << std::endl;
}

Ice::Ice(Ice const &toCopy) {
	*this = toCopy;
	//std::cout << "[Ice] Copy constructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &toCopy) {
	if (this != &toCopy) {
		this->_type = toCopy._type;
		//std::cout << "[Ice] Assigned constructor called" << std::endl;
	}
	return *this;
}

AMateria *Ice::clone() const {
	return new Ice();
}

Ice::~Ice() {
	//std::cout << "[Ice] Destructor called" << std::endl;
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
