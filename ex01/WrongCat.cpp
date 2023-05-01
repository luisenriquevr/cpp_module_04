/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:38:40 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/01 15:04:16 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << YELLOW << "[WrongCat] Default constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &toCopy) {
    *this = toCopy;
    std::cout << YELLOW << "[WrongCat] Copy constructor called" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &toCopy) {
    if (this != &toCopy) {
        this->type = toCopy.type;
        std::cout << YELLOW << "[WrongCat] Assigned constructor called" << RESET << std::endl;
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << YELLOW << "[WrongCat] Destructor called" << RESET << std::endl;
}

const std::string   WrongCat::getType() const {
    return this->type;
}

void    WrongCat::makeSound() const {
    std::cout << YELLOW << "[WrongCat] meows" << RESET << std::endl;
}

std::ostream    &operator<<(std::ostream &COUT, const WrongCat &WrongCat) {
    COUT << RED << "[WrongCat] " << "Type: " << WrongCat.getType() << RESET <<std::endl;
    return COUT;
}
