/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 04:47:27 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/03 05:06:05 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "testing methods pour animal generique " << std::endl;
    const Animal* meta = new Animal();
    std::cout << meta->getType() << " " << std::endl;
    meta->makeSound();
    std::cout << "___________________________________________" << std::endl;

    std::cout << "Testing methode virtuel a partir danimal(generique) pour dog redefinition par class derivee de  methode virtuelle overidiiiing " << std::endl;
    Animal* a = new Dog;
    std::cout << a->getType() << " " << std::endl;
    a->makeSound();
    std::cout << "___________________________________________" << std::endl;
    
    std::cout << "Testing sans polymorph objet/ptr dog "<< std::endl;
    Dog* b = new Dog;
    std::cout << b->getType() << " " << std::endl;
    b->makeSound();
    std::cout << "___________________________________________" << std::endl;

    std::cout << "testing polymorphisme pour cat le chat est un animal j'en herite" << std::endl;
    Animal* c = new Cat;
    std::cout << c->getType() << " " << std::endl;
    c->makeSound();
    std::cout << "___________________________________________" << std::endl;

    std::cout << "Wrong animal en generique " << std::endl;
    const WrongAnimal* met2 = new WrongAnimal();
    std::cout << met2->getType() << " " << std::endl;
    met2->makeSound();
    std::cout << "___________________________________________" << std::endl;

    std::cout << "WrongCat en polymorph " << std::endl;
    WrongAnimal* mewmew = new WrongCat;
    std::cout << mewmew->getType() << " " << std::endl;
    mewmew->makeSound();
    std::cout << "___________________________________________" << std::endl;
   
    delete meta;
    delete a;
    delete b;
    delete c;
    delete met2;
    delete mewmew;
    
}
