/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 02:23:06 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/04 04:40:15 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


 Cat::Cat() : Animal("Cat") 
{
  
}

Cat::Cat(const Cat& other) : Animal(other) 
{
   
}

Cat& Cat::operator=(const Cat& other) 
{
    
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