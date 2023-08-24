/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:33:50 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/24 17:32:06 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
   public:
	virtual ~IMateriaSource() {}

	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
};
