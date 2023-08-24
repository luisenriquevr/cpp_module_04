/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:29:55 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/24 17:01:41 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void check_leaks()
{
	system("leaks Brain");
}

int main() {

	atexit(check_leaks);
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    //const AAnimal perro("perro");

    i->makeSound();
    //perro.makeSound();
    
    delete j; //should not create a leak
    delete i;

    std::cout << "-----------LEAKS-----------" << std::endl;
    return 0;
}
