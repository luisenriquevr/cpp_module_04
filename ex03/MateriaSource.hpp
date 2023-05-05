/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:43:51 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/05 14:04:37 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
   private:
    AMateria *_learnedMaterias[4];

   public:
	MateriaSource();
	MateriaSource(MateriaSource const &toCopy);
	virtual ~MateriaSource();

	MateriaSource &operator=(MateriaSource const &toCopy);

	virtual void learnMateria(AMateria *newMateria);
	virtual AMateria *createMateria(std::string const &type);
};
