/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:29:55 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/01 11:00:11 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"


int main()
{
    std::cout << "-----------GOOD------------" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "-----------BAD-------------" << std::endl;
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_j = new WrongDog();
    const WrongAnimal* wrong_i = new WrongCat();
    std::cout << wrong_j->getType() << " " << std::endl;
    std::cout << wrong_i->getType() << " " << std::endl;
    wrong_i->makeSound(); //will output the WrongCat sound!
    wrong_j->makeSound();
    wrong_meta->makeSound();
    return 0;
}