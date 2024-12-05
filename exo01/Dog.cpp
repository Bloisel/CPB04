/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 02:23:06 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/05 14:00:16 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") 
{
    std::cout << "default DOG consturcotr called " << std::endl;
    this->brain = new Brain();
    
}

Dog::Dog(const Dog& other) : Animal(other) 
{
    std::cout << "Copy DOG constructeur called " << std::endl;
    this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other) 
{
    std::cout << "Copy assignement DOG operator called" << std::endl;
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

void Dog::SetideaBrain() const
{
     if (this->brain == nullptr) {
        std::cerr << "Error: brain is nullptr in SetideaBrain!" << std::endl;
        return;
    }
    this->brain->setIdea("je mappelle DOG", 0);
    this->brain->setIdea("je mapelle DMX WAOUHHH where the hood at", 1);
    for (unsigned int i = 2; i < 6; i++)
    {
        this->brain->setIdea("loop testing", i);
    }    
}

void Dog::IdeaBrain() const
{
    for (unsigned int i = 0; i < 6; i++)
    {
        std::cout << this->brain->getIdea(i) << std::endl;
    }
}






