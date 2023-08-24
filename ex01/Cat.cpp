/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:38:40 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/24 16:54:42 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain()) {
    std::cout << YELLOW << "[Cat] Default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &toCopy) : Animal(toCopy), _brain(new Brain(*toCopy._brain)) {
    std::cout << YELLOW << "[Cat] Copy constructor called" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &toCopy) {
    if (this != &toCopy) {
        this->_type = toCopy._type;
        this->_brain = new Brain(*toCopy._brain);
        std::cout << YELLOW << "[Cat] Assigned constructor called" << RESET << std::endl;
    }
    return *this;
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << YELLOW << "[Cat] Destructor called" << RESET << std::endl;
}

const std::string   Cat::getType() const {
    return this->_type;
}

void    Cat::makeSound() const {
    std::cout << YELLOW << "[Cat] meows" << RESET << std::endl;
}

Brain   *Cat::getBrain(void) const {
	return this->_brain;
}

std::ostream    &operator<<(std::ostream &COUT, const Cat &Cat) {
    COUT << RED << "[Cat] " << "Type: " << Cat.getType() << RESET <<std::endl;
    return COUT;
}
