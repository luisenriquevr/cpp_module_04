/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:19:42 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/05 14:19:15 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {
   public:	
	Ice();
	Ice(Ice const &toCopy);
	Ice &operator=(Ice const &toCopy);
	~Ice();

	AMateria *clone() const;
	void use(ICharacter &target);
};
