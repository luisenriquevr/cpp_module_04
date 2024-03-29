/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:05:51 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/08 18:17:47 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("¿?") {
    std::cout << RED << "[Animal] Default constructor called" << RESET << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {
    std::cout << RED << "[Animal] Type constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &toCopy) {
    *this = toCopy;
    std::cout << RED << "[Animal] Copy constructor called" << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &toCopy) {
    if (this != &toCopy) {
        this->_type = toCopy._type;
        std::cout << RED << "[Animal] Assigned constructor called" << RESET << std::endl;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << RED << "[Animal] Destructor called" << RESET << std::endl;
}

const std::string   Animal::getType() const {
    return this->_type;
}

void    Animal::makeSound() const {
    std::cout << "[Animal] ¿?" << std::endl;
}

std::ostream    &operator<<(std::ostream &COUT, const Animal &Animal) {
    COUT << RED << "[Animal] " << "Type: " << Animal.getType() << RESET <<std::endl;
    return COUT;
}
