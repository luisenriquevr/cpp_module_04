/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:38:40 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/01 15:04:16 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal("WrongDog") {
    std::cout << GREEN << "[WrongDog] Default constructor called" << RESET << std::endl;
}

WrongDog::WrongDog(const WrongDog &toCopy) {
    *this = toCopy;
    std::cout << GREEN << "[WrongDog] Copy constructor called" << RESET << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &toCopy) {
    if (this != &toCopy) {
        this->type = toCopy.type;
        std::cout << GREEN << "[WrongDog] Assigned constructor called" << RESET << std::endl;
    }
    return *this;
}

WrongDog::~WrongDog() {
    std::cout << GREEN << "[WrongDog] Destructor called" << RESET << std::endl;
}

const std::string   WrongDog::getType() const {
    return this->type;
}

void    WrongDog::makeSound() const {
    std::cout << GREEN << "[WrongDog] barks" << RESET << std::endl;
}

std::ostream    &operator<<(std::ostream &COUT, const WrongDog &WrongDog) {
    COUT << RED << "[WrongDog] " << "Type: " << WrongDog.getType() << RESET <<std::endl;
    return COUT;
}
