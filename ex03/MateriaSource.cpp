/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:43:49 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/24 18:21:06 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "RGB.hpp"

MateriaSource::MateriaSource() {
    for (unsigned short int i = 0; i < 4; i++)
        this->_learnedMaterias[i] = NULL;
	std::cout << MAGENTA << "Materia created" << RESET << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &toCopy) {
    *this = toCopy;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &toCopy) {
    if (this != &toCopy) {
        for (unsigned short int i = 0; i < 4; i++)
            this->_learnedMaterias[i] = toCopy._learnedMaterias[i];
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *newMateria) {
    if (newMateria) {
        for (unsigned short int i = 0; i < 4; i++) {
            if (this->_learnedMaterias[i] == NULL) {
                this->_learnedMaterias[i] = newMateria;
                return ;
            }
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    for (unsigned short int i = 0; i < 4; i++) {
        if (this->_learnedMaterias[i] != NULL)
            if (this->_learnedMaterias[i]->getType() == type)
                return this->_learnedMaterias[i]->clone();
    }
    return 0;
}

MateriaSource::~MateriaSource() {
        for(int i = 0; i < 4; i++)
            (this->_learnedMaterias[i]) ? delete this->_learnedMaterias[i] : void();
}
