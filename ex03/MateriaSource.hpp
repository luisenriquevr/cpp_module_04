/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:43:51 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/04 20:19:16 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
   private:
    std::string const _name;

   public:
	MateriaSource();
	explicit MateriaSource(std::string const &);
	MateriaSource(MateriaSource const &toCopy);
	~MateriaSource();

	MateriaSource &operator=(MateriaSource const &toCopy);
	void learnMateria(AMateria*);
	AMateria *createMateria(std::string const &type);
};
