/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:50:28 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/08 19:44:38 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain()) {
    std::cout << GREEN << "[Dog] Default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &toCopy) {
    *this = toCopy;
	// this->_type = toCopy.getType();
	// this->_brain = new Brain(*toCopy._brain);
    std::cout << GREEN << "[Dog] Copy constructor called" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &toCopy) {
    if (this != &toCopy) {
        this->_type = toCopy._type;
        this->_brain = new Brain(*toCopy._brain);
        // this->_type = toCopy.getType();
        // this->_brain = toCopy._brain;
        std::cout << GREEN << "[Dog] Assigned constructor called" << RESET << std::endl;
    }
    return *this;
}

Dog::~Dog() {
    delete this->_brain;
    std::cout << GREEN << "[Dog] Destructor called" << RESET << std::endl;
}

const std::string   Dog::getType() const {
    return this->_type;
}

void    Dog::makeSound() const {
    std::cout << GREEN << "[Dog] barks" << RESET << std::endl;
}

Brain   *Dog::getBrain(void) const {
	return this->_brain;
}

std::ostream    &operator<<(std::ostream &COUT, const Dog &Dog) {
    COUT << RED << "[Dog] " << "Type: " << Dog.getType() << RESET <<std::endl;
    return COUT;
}
