/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:59:11 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/02 10:21:35 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "idea[" + std::to_string(i) + "]";
	}
	std::cout << BLUE << "[Brain] Default constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain &toCopy) {
	*this = toCopy;
	std::cout << BLUE << "[Brain] Copy constructor called" << RESET << std::endl;
}

Brain::~Brain() {
	std::cout << BLUE << "[Brain] Destructor called" << RESET << std::endl;
}

Brain	&Brain::operator=(const Brain &toCopy) {
	if (this != &toCopy) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = toCopy.ideas[i];
		}
	}
	return *this;
}
