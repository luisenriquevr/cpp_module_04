/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:59:18 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/02 10:21:35 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "RGB.hpp"

class Brain {
   private:
    std::string ideas[100];

   public:
	Brain();
	Brain(const Brain &toCopy);
	virtual ~Brain();

	Brain   &operator=(const Brain &toCopy);
};
