/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:29:55 by lvarela           #+#    #+#             */
/*   Updated: 2023/08/24 16:32:02 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void check_leaks()
{
	system("leaks Brain");
}

int main( void ) {

	atexit(check_leaks);
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Cat *diablo = new Cat();
	diablo->getBrain()->setIdea(0, "Basic meow");
	diablo->getBrain()->setIdea(1, "Power meow");
	diablo->getBrain()->setIdea(2, "HUSHHHHHHH");

	std::cout << "Diablo idea 0: " << diablo->getBrain()->getIdea(0) << std::endl;
	std::cout << "Diablo idea 1: " << diablo->getBrain()->getIdea(1) << std::endl;
	std::cout << "Diablo idea 2: " << diablo->getBrain()->getIdea(2) << std::endl;
	std::cout << "Diablo idea non existing: " << diablo->getBrain()->getIdea(3) << std::endl;

	Cat *quebrantahuesos = new Cat(*diablo);
	quebrantahuesos->getBrain()->setIdea(0, "ROAR I TURNED INTO A LION");

	std::cout << "Quebrantahuesos idea 0: " << quebrantahuesos->getBrain()->getIdea(0) << std::endl;
	std::cout << "Quebrantahuesos idea 1: " << quebrantahuesos->getBrain()->getIdea(1) << std::endl;
	std::cout << "Quebrantahuesos idea 2: " << quebrantahuesos->getBrain()->getIdea(2) << std::endl;
	std::cout << "Quebrantahuesos idea non existing: " << quebrantahuesos->getBrain()->getIdea(3) << std::endl;

	Dog *drako = new Dog();
	drako->getBrain()->setIdea(0, "WOOF");
	drako->getBrain()->setIdea(1, "WOOF WOOF");
	drako->getBrain()->setIdea(2, "I'M HUNGRY");

	std::cout << "Drako idea 0: " << drako->getBrain()->getIdea(0) << std::endl;
	std::cout << "Drako idea 1: " << drako->getBrain()->getIdea(1) << std::endl;
	std::cout << "Drako idea 2: " << drako->getBrain()->getIdea(2) << std::endl;
	std::cout << "Drako idea non existing: " << drako->getBrain()->getIdea(3) << std::endl;

	Dog *roko = new Dog(*drako);
	roko->getBrain()->setIdea(0, "WTF IS THAT CAT DOING");

	std::cout << "Roko idea 0: " << roko->getBrain()->getIdea(0) << std::endl;
	std::cout << "Roko idea 1: " << roko->getBrain()->getIdea(1) << std::endl;
	std::cout << "Roko idea 2: " << roko->getBrain()->getIdea(2) << std::endl;
	std::cout << "Roko idea non existing: " << roko->getBrain()->getIdea(3) << std::endl;

	delete j;
	delete i;
	delete diablo;
	delete quebrantahuesos;
	delete drako;
	delete roko;

	Animal *animals[10];

	for(int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for(int i = 0; i < 10; i++)
		delete animals[i];

	return 0;
}