/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:05:51 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/24 16:38:42 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("¿?") {
    std::cout << RED << "[AAnimal] Default constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(const std::string &_type) : type(_type) {
    std::cout << RED << "[AAnimal] Type constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &toCopy) {
    *this = toCopy;
    std::cout << RED << "[AAnimal] Copy constructor called" << RESET << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &toCopy) {
    if (this != &toCopy) {
        this->type = toCopy.type;
        std::cout << RED << "[AAnimal] Assigned constructor called" << RESET << std::endl;
    }
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << RED << "[AAnimal] Destructor called" << RESET << std::endl;
}

const std::string   AAnimal::getType() const {
    return this->type;
}

std::ostream    &operator<<(std::ostream &COUT, const AAnimal &AAnimal) {
    COUT << RED << "[AAnimal] " << "Type: " << AAnimal.getType() << RESET <<std::endl;
    return COUT;
}
