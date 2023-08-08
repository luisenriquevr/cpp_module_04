/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:59:11 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/08 20:03:49 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	// Es posible que sobre
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = "idea[" + std::to_string(i) + "]";
	}
	std::cout << BLUE << "[Brain] Default constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain &toCopy) {
	*this = toCopy;
	// for (int i = 0; i < 100; i++)
	// 	this->_ideas[i] = toCopy._ideas[i];
	std::cout << BLUE << "[Brain] Copy constructor called" << RESET << std::endl;
}

Brain::~Brain() {
	std::cout << BLUE << "[Brain] Destructor called" << RESET << std::endl;
}

Brain	&Brain::operator=(const Brain &toCopy) {
	if (this != &toCopy) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = toCopy._ideas[i];
		}
	}
	return *this;
}

std::string	Brain::getIdea(int i) {
	if (i >= 0 && i < 100)
		return this->_ideas[i];
	return NULL;
}

void	Brain::setIdea(int i, std::string idea) {
	if (i >= 0 && i < 100)
		this->_ideas[i] = idea;
}
