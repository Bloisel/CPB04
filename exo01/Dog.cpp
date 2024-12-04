/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 02:23:06 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/04 04:40:00 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"



Dog::Dog() : Animal("Dog") 
{
    
}

Dog::Dog(const Dog& other) : Animal(other) 
{
   
}

Dog& Dog::operator=(const Dog& other) 
{
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
