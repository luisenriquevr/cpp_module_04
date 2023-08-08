/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:29:55 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/08 16:29:34 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    //const Animal perro("perro");

    i->makeSound();
    //perro.makeSound();
    
    delete j; //should not create a leak
    delete i;

    std::cout << "-----------LEAKS-----------" << std::endl;
    return 0;
}
