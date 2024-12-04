/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 02:23:06 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/04 15:27:57 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


 Cat::Cat() : Animal("Cat") 
{
    brain = new Brain();
    std::cout << "Constructeur defaut Cat" << std::endl;
  
}

Cat::Cat(const Cat& other) : Animal(other) 
{
    this->brain = new Brain(*other.brain); // deep copy 
    
   
}

/* brain = new Brain(*other.brain);

copie profonde de l'objet Brain pointé par other.brain.

other.brain est un pointeur vers un objet Brain.

*other.brain déréférence ce pointeur pour accéder à l'objet réel (une instance de la classe Brain).

new Brain(*other.brain) crée un nouvel objet Brain en copiant celui pointé par other.brain, grâce au constructeur de copie de Brain.

Le pointeur brain de l'objet en cours de construction est alors initialisé pour pointer vers cette nouvelle instance.

garantit que chaque objet Cat a sa propre copie indépendante de l'objet Brain, plutôt que de partager un même pointeur. */



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