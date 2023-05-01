/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:05:51 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/01 10:53:29 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("¿?") {
    std::cout << RED << "[WrongAnimal] Default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &_type) : type(_type) {
    std::cout << RED << "[WrongAnimal] Type constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &toCopy) {
    *this = toCopy;
    std::cout << RED << "[WrongAnimal] Copy constructor called" << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &toCopy) {
    if (this != &toCopy) {
        this->type = toCopy.type;
        std::cout << RED << "[WrongAnimal] Assigned constructor called" << RESET << std::endl;
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << RED << "[WrongAnimal] Destructor called" << RESET << std::endl;
}

const std::string   WrongAnimal::getType() const {
    return this->type;
}

void    WrongAnimal::makeSound() const {
    std::cout << "¿?" << std::endl;
}

std::ostream &operator<<(std::ostream &COUT, const WrongAnimal &WrongAnimal) {
    COUT << RED << "[WrongAnimal] " << "Type: " << WrongAnimal.getType() << RESET <<std::endl;
    return COUT;
}