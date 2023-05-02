/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:19:38 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/03 00:25:19 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : virtual public AMateria {
   public:	
	Cure();
	Cure(Cure const &toCopy);
	Cure &operator=(Cure const &toCopy);
	~Cure();

	AMateria *clone() const;
	void use(ICharacter &target);
};
