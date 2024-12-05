/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 02:23:06 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/05 16:05:13 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


 Cat::Cat() : AAnimal("Cat") 
{
    brain = new Brain();
    std::cout << "Constructeur defaut Cat" << std::endl;
  
}

Cat::Cat(const Cat& other) : AAnimal(other) 
{
    this->brain = new Brain(*other.brain); // deep copy 
    
   
}


Cat& Cat::operator=(const Cat& other) 
{
    std::cout << "copy assignement constructr called " << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
        delete brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
    
}

Cat::~Cat() 
{
    delete brain;
    std::cout << "Cat: Destructor called" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Cat: Meow Meow!" << std::endl;
}

Brain* Cat::getBrain() const 
{
    return brain;
} 