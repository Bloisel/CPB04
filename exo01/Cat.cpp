/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 02:23:06 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/05 13:55:51 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


 Cat::Cat() : Animal("Cat") 
{
    std::cout << "Constructeur CAT defaut" << std::endl;
    brain = new Brain();
  
}

Cat::Cat(const Cat& other) : Animal(other) 
{
    std::cout << "copy CAT constructor called " << std::endl;
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
    std::cout << "copy assignement CAT operator called " << std::endl;
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
    delete this->brain;
    std::cout << "Cat: Destructor called" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Cat: Meow Meow!" << std::endl;
}

void Cat::SetideaBrain() const
{
     if (this->brain == nullptr) {
        std::cerr << "Error: brain is nullptr in SetideaBrain!" << std::endl;
        return;
    }
    this->brain->setIdea("je mappelle nouka", 0);
    this->brain->setIdea("je mapelle Adil", 1);
    for (unsigned int i = 2; i < 6; i++)
    {
        this->brain->setIdea("loop testing", i);
    }    
}

void Cat::IdeaBrain() const
{
    for (unsigned int i = 0; i < 6; i++)
    {
        std::cout << this->brain->getIdea(i) << std::endl;
    }
}
