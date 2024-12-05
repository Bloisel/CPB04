/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 02:23:06 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/05 14:14:19 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") 
{
    this->brain = new Brain();
    std::cout << "default consturcotr called" << std::endl;
    
}

Dog::Dog(const Dog& other) : AAnimal(other) 
{
    this->brain = new Brain(*other.brain);
    std::cout << "Copy constructeur called " << std::endl;
   
}

Dog& Dog::operator=(const Dog& other) 
{
    std::cout << "Copy assignement constructor called" << std::endl;
   if (this != &other)
   {
        delete brain;
        brain = new Brain(*other.brain);     
   }
   return *this; 
}

Dog::~Dog() 
{
    delete brain;
    std::cout << "Dog: Destructor called" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "Dog: Woof Woof!" << std::endl;
}

Brain* Dog::getBrain() const 
{
    return brain;
}
